class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
      map<int,int>mp;
      for(int i=0;i<arr.size();i++){
         int rem=((arr[i]%k)+k)%k;
         mp[rem]++;
      }
      if(mp[0]%2!=0){
        return false;
      }
      int i=1;
      while(k-i>0){
        if(mp[i]!=mp[k-i]){
            return false;
        }
        i++;
      }
      return true;
    }
};