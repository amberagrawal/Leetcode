class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int t) {
        int a=times[t][0];
        int d=times[t][1];
        sort(times.begin(),times.end());
       vector<int>ch(times.size(),0);
       for(int i=0;i<times.size();i++){
        for(int j=0;j<ch.size();j++){
            if(ch[j]<=times[i][0]){
                ch[j]=times[i][1];
                if(times[i][0]==a){
                    return j;
                }
                break;
            }
        }
       }
       return 0;
    }
};