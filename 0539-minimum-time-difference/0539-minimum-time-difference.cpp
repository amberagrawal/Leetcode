class Solution {
public:
    int findMinDifference(vector<string>& time) {
        vector<int>t;
        for(int i=0;i<time.size();i++){
            string s=time[i];
                int hour=((s[0]-'0')*10)+(s[1]-'0');
                int minutes=((s[3]-'0')*10)+(s[4]-'0');
                int total=hour*60 + minutes;
                t.push_back(total);
        }
        sort(t.begin(),t.end());
        int mini=min(INT_MAX,1440-t.back()+t[0]);
        for(int i=0;i<t.size()-1;i++){
            for(int j=i+1;j<t.size();j++){
              int diff=abs(t[i]-t[j]);
              mini=min(mini,diff);
            }
        }
        return mini;
    }
};