class MapSum {
public:
    map<string,int>mp;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        mp[key]=val;
    }
    
    int sum(string prefix) {
        int total=0;
        for(auto i:mp){
            string s=i.first;
            string s1=prefix;
            if(s.substr(0,s1.length())==s1){
                total=total+i.second;
            }
        }
        return total;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */