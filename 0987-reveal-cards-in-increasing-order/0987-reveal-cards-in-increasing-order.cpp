class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& nums) {
        vector<int>v(nums.size(),0);
        sort(nums.begin(),nums.end());
        queue<int>q;
        for(int i=0;i<nums.size();i++){
            q.push(i);
        }
        int i=0;
        while(!q.empty()){
            int a=q.front();
            v[a]=nums[i++];
            q.pop();
            if(!q.empty()){
            q.push(q.front());
            q.pop();
            }
        }
        return v;
    }
};