class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        int n = nums.size();

    vector<int> pre(n, -1), suff(n, -1);
    stack<int> st;

    // ---------- Nearest Greater to Left ----------
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[st.top()] <= nums[i])
            st.pop();
        if (!st.empty())
            pre[i] = st.top();  // index of nearest greater element on left
        st.push(i);
    }

    // Clear stack for right pass
    while (!st.empty()) st.pop();

    // ---------- Nearest Greater to Right ----------
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && nums[st.top()] <= nums[i])
            st.pop();
        if (!st.empty())
            suff[i] = st.top();  // index of nearest greater element on right
        st.push(i);
    }
        int c=0;
        for(int i=0;i<n;i++){
            if(pre[i]!=-1&&suff[i]!=-1){
                c++;
            }
        }
        return c;
    }
};