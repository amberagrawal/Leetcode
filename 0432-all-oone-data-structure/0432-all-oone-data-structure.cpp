class AllOne {
public:
    map<string, int> mp;  // Store the key-value pairs
    set<pair<int, string>> valSet;  // Store values in a sorted set (value, key)

    AllOne() {
        
    }

    void inc(string key) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        // If the key already exists, remove the old value from the set
        if (mp.count(key)) {
            valSet.erase({mp[key], key});
        }
        // Increment the value in the map
        mp[key]++;
        // Insert the updated key-value pair into the set
        valSet.insert({mp[key], key});
    }

    void dec(string key) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if (mp.count(key)) {
            // Remove the current value from the set
            valSet.erase({mp[key], key});
            mp[key]--;
            // If the value becomes 0, remove it from the map
            if (mp[key] == 0) {
                mp.erase(key);
            } else {
                // Otherwise, update the set with the new value
                valSet.insert({mp[key], key});
            }
        }
    }

    string getMaxKey() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if (valSet.empty()) {
            return "";
        }
        // The last element in the set has the maximum value
        return valSet.rbegin()->second;
    }

    string getMinKey() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if (valSet.empty()) {
            return "";
        }
        // The first element in the set has the minimum value
        return valSet.begin()->second;
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */
