class Solution {
public:
    int sumOfMultiples(int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
       int total=0;
       for(int i=1;i<=n;i++){
        if(i%3==0||i%5==0||i%7==0){
            total=total+i;
        }
       } 
       return total;
    }
};