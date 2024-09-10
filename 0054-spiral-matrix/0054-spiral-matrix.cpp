class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
     int row=matrix.size();
     int col=matrix[0].size();
     int right=0;
     int left=col-1;
     int top=0;
     int bottom=row-1;
     vector<int>v;
     int count=0;
     while(count<row*col){
      for(int i=right;i<=left&&count<row*col;i++){
        v.push_back(matrix[top][i]);
        count++;
      }
      top++;
      for(int i=top;i<=bottom&&count<row*col;i++){
        v.push_back(matrix[i][left]);
        count++;
      }
      left--;
      for(int i=left;i>=right&&count<row*col;i--){
        v.push_back(matrix[bottom][i]);
        count++;
      }
      bottom--;
      for(int i=bottom;i>=top&&count<row*col;i--){
        v.push_back(matrix[i][right]);
        count++;
      }
      right++;
     }
     return v;
    }
};