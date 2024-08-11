class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
       int arr[n][n];
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=(i*n)+j;
        }
       } 
       int row=0;
       int col=0;
       for(int i=0;i<commands.size();i++){
        if(commands[i]=="UP"){
          row--;
        }
        if(commands[i]=="DOWN"){
            row++;
        }
        if(commands[i]=="RIGHT"){
            col++;
        }
        if(commands[i]=="LEFT"){
            col--;
        }
       }
       return arr[row][col];
    }
};