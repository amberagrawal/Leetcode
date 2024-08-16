class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
      if(n==1){
        return 1;
      } 
      else{
        return (double)1/2;
      }
    }
};