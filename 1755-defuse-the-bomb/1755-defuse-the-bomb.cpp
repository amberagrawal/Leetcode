class Solution {
public:
    vector<int> decrypt(vector<int>& arr, int k) {
        vector<int>v(arr.size());
        for(int i=0;i<arr.size();i++){
            int count=abs(k);
            int sum=0;
            if(k>0){
                int j=i+1;
            while(count>0){
                if(j==arr.size()){
                j=0;
                }
                sum=sum+arr[j];
                j++;
                count--;
            }
            }
            else if(k<0){
                int j=i-1;
                while(count>0){
                if(j==-1){
                j=arr.size()-1;
                }
                sum=sum+arr[j];
                j--;
                count--;
            }
            }
            else{
                sum=0;
            }
            v[i]=sum;
        }
        return v;
    }
};