class Solution {
public:
    vector<int> minOperations(string boxes) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int>v;
        int n=boxes.length();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(boxes[j]=='1'){
                count=count+abs(i-j);
                }
            }
            v.push_back(count);
        }
        return v;
    }
};