class Solution {
public:
    vector<int> countWordOccurrences(vector<string>& arr, vector<string>& q) {
        string s;
        for(int i=0;i<arr.size();i++){
            s+=arr[i];
        }
        string t;
        unordered_map<string,int>mp;
        int i=0;
        while(i<s.length()){
           // cout<<t<<endl;
            if(s[i]==' '){
                mp[t]++;
                t="";
            }
            else{
                if(s[i]!='-'){
                    t.push_back(s[i]);
                }
                else if(s[i]=='-'&&t==""){

                }
                else if(s[i]=='-'&&(i==s.length()-1||s[i+1]==' ')){

                }
                else{
                    int c=0;
                    while(i<s.length()&&s[i]=='-'){
                        c++;
                        i++;
                    }
                    i--;
                    if(c==1){
                        t.push_back(s[i]);
                    }
                    else{
                        mp[t]++;
                        t="";
                    }
                }
            }
            i++;
        }
        if(t!=""){
            mp[t]++;
        }
        vector<int>v(q.size(),0);
        for(int i=0;i<q.size();i++){
            v[i]=mp[q[i]];
        }
        return v;
    }
};