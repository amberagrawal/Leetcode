class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0;
        int h=arr.size()-1;
        int mid;
        while(l<=h){
            mid=l+(h-l)/2;
            if(arr[mid]-1-mid<k){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return l+k;
    }
};