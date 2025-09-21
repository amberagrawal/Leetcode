class MovieRentingSystem {
public:
    map<int,set<pair<int,int>>> smp;  // shop -> {price, movie}
    map<int,set<pair<int,int>>> msp;  // movie -> {price, shop}
    map<int,map<int,int>> pr;         // movie -> shop -> price
    set<pair<int,pair<int,int>>> low; // {price, {shop, movie}} available
    set<pair<int,pair<int,int>>> rented; // {price, {shop, movie}} rented

    MovieRentingSystem(int n, vector<vector<int>>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int s = nums[i][0];
            int m = nums[i][1];
            int p = nums[i][2]; 
            pr[m][s] = p;
            smp[s].insert({p, m});
            msp[m].insert({p, s});
            low.insert({p, {s, m}});
        }
    }

    vector<int> search(int m) {
        vector<int> v;
        auto& s = msp[m]; 
        for (auto p : s) {
            v.push_back(p.second);
            if (v.size() == 5) break;
        }
        return v;
    }
    
    void rent(int s, int m) {
        int price = pr[m][s];
        smp[s].erase({price, m});
        msp[m].erase({price, s});
        low.erase({price, {s, m}});
        rented.insert({price, {s, m}});
    }
    
    void drop(int s, int m) {
        int price = pr[m][s];
        rented.erase({price, {s, m}});
        smp[s].insert({price, m});
        msp[m].insert({price, s});
        low.insert({price, {s, m}});
    }
    
    vector<vector<int>> report() {
        vector<vector<int>> v;
        for (auto x : rented) {
            int p = x.first;
            int s = x.second.first;
            int m = x.second.second;
            v.push_back({s, m});
            if (v.size() == 5) break;
        }
        return v;
    }
};
