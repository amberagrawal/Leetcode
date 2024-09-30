class Solution {
public:
    int hIndex(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       int maxi=0;
       while(true){
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=maxi){
                count++;
            }
        }
        if(count<maxi){
            return maxi-1;
        }
        maxi++;
       }
       return maxi-1;
    }
};