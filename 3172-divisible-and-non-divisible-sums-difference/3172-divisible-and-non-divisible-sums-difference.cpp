class Solution {
public:
    int differenceOfSums(int n, int m) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
       int a=0;
       int b=0;
       for(int i=1;i<=n;i++){
        if(i%m!=0){
            a=a+i;
        }
        else{
            b=b+i;
        }
       } 
       return a-b;
    }
};