class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
       sort(left.rbegin(),left.rend());
       sort(right.begin(),right.end()); 
       int time=0;
       if(!left.empty()&&!right.empty()){
       time=max(left[0],n-right[0]);
       }
       else if(!left.empty()&&right.empty()){
        time=left[0];
       }
       else if(!right.empty()&&left.empty()){
        time=n-right[0];
       }
       return time;
    }
};