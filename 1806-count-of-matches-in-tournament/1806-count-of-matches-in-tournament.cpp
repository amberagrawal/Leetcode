class Solution {
public:
    int numberOfMatches(int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int totalmatches=0;
        int team=n;
        while(team>1){
        if(team%2!=0){
         totalmatches=totalmatches+team/2;   
        team=(team-1)/2 +1;
        }
        else{
            totalmatches=totalmatches+team/2;
            team=team/2;
        }
        }
        return totalmatches;
    }
};