class Solution {
public:
    int reinitializePermutation(int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int>perm;
        for(int i=0;i<n;i++){
            perm.push_back(i);
        }
        vector<int>arr1=perm;
        int count=0;
        vector<int>arr(n);
        while(arr!=perm){
        for(int i=0;i<n;i++){
          if(i%2==0){
            arr[i] = arr1[i / 2];
          }
          else{
            arr[i] = arr1[n / 2 + (i - 1) / 2]; 
          }
        }
        count++;
        arr1=arr;
        }
        return count;
    }
};