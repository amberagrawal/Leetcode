class Solution {
public:
    int minOperations(int n) {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int total=0;
      if(n%2==0){
        total=pow(n/2,2);
      }
      else{
        total=(n/2)*((n/2)+1);
      }
      return total;
    }
};