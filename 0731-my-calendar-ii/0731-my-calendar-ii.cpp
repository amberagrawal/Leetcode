class MyCalendarTwo {
public:
    map<int, int> mp;

    bool book(int start, int end) {
        mp[start]++;
        mp[end]--;
        
        int active_events = 0;
        for (auto it : mp) {
            active_events += it.second;
            if (active_events >= 3) {
                mp[start]--;
                mp[end]++;
                return false;
            }
        }
        
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */