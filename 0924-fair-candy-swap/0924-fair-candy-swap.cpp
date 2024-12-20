class Solution {
public:
    bool check(vector<int>arr,int a){
        int l=0;
        int r=arr.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==a){
                return true;
            }
            else if(arr[mid]>a){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
    vector<int> fairCandySwap(vector<int>& arr, vector<int>& arr1) {
        int a=0;
        int b=0;
        for(int i=0;i<arr.size();i++){
            a=a+arr[i];
        }
        for(int i=0;i<arr1.size();i++){
            b=b+arr1[i];
        }
        sort(arr.begin(),arr.end());
        sort(arr1.begin(),arr1.end());
        int avg=(a+b)/2;
        int r1=avg-a;
        vector<int>v(2);
        for(int i=0;i<arr.size();i++){
                int req=arr[i]+r1;
                if(check(arr1,req)){
                    v[0]=arr[i];
                    v[1]=req;
                    break;
                }
        }
        return v;
    }
};