class Solution {
public:
    int pivotInteger(int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
      for(int i=1;i<=n;i++){
        int sum1=i*(i+1)/2;
        int sum2=0;
        for(int j=i;j<=n;j++){
            sum2=sum2+j;
        }
        if(sum1==sum2){
            return i;
        }
      }  
      return -1;
    }
};