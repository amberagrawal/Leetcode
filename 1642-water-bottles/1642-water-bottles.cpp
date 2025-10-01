class Solution {
public:
    int numWaterBottles(int f, int e) {
        int c=0;
        while(f>=e){
            c=c+e;
            f=f-e+1;
        }
        c=c+f;
        return c;
    }
};