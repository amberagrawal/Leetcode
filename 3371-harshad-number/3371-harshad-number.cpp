class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int a=x;
        int b=0;
        while(a>0){
            b=b+a%10;
            a=a/10;
        }
        if(x%b==0){
            return b;
        }
        return -1;
    }
};