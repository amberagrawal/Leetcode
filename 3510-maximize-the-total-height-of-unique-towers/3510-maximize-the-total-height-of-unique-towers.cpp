class Solution {
public:
    long long maximumTotalSum(vector<int>& h) {
     sort(h.rbegin(),h.rend());
     int a=h[0];
     long long sum=a;
     for(int i=1;i<h.size();i++){
        if(h[i]<a){
            sum=sum+h[i];
            a=h[i];
        }
        else{
           sum=sum+a-1;
           a=a-1;
           if(a==0){
            return -1;
           }
        }
     }
     return sum;
    }
};