class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        vector<char>output;
        vector<string>ans;
        for(int i=0;i<paragraph.size();i++){
           if(paragraph[i]>='a'&&paragraph[i]<='z'){
            output.push_back(tolower(paragraph[i]));
           }
           else if(paragraph[i]>='A'&&paragraph[i]<='Z'){
            output.push_back(tolower(paragraph[i]));
           }
           else{
            if(!output.empty()) {
               ans.push_back(string(output.begin(), output.end()));
               output.clear();
           }
           }
        }
        if(!output.empty()) {
            ans.push_back(string(output.begin(), output.end()));
        }
        map<string,int>mp;
        for(int i=0;i<ans.size();i++){
            mp[ans[i]]++;
        }
        vector<pair<int,string>>v;
        for(auto i: mp){
            v.push_back(make_pair(i.second,i.first));
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++){
            int count=0;
            for(int j=0;j<banned.size();j++){
                if(v[i].second==banned[j]){
                    count=-1;
                    break;
                }
            }
            if(count!=-1){
                return v[i].second;
            }
        }
        return "";
    }
};