class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
       int row=bank.size();
       int col=bank[0].size();
       int  count=0;
       int prev=0;
       int forw=0;
       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          if(bank[i][j]=='1'){
            forw++;
          }
        }
        count=count+prev*forw;
        if(i>0&&forw==0){
            continue;
        }
        else{
        prev=forw;
        }
        forw=0;
       } 
       return count;
    }
};