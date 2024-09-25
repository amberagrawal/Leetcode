class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       int a=0;
       for(int i=0;i<nums.size();i++){
        a=a^nums[i];
       } 
       string s="";
       string s1="";
       while(a>0){
        s=s+to_string(a%2);
        a=a/2;
       }
       while(k>0){
        s1=s1+to_string(k%2);
        k=k/2;
       }
       reverse(s1.begin(),s1.end());
       reverse(s.begin(),s.end());
       if(s.length()>s1.length()){
        s1.insert(0,s.length()-s1.length(),'0');
       }
       else if(s.length()<s1.length()){
        s.insert(0,s1.length()-s.length(),'0');
       }
       int count=0;
       for(int i=0;i<s.length();i++){
        if(s[i]!=s1[i]){
            count++;
        }
       }
       return count;
    }
};