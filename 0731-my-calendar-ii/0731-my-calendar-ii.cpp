class MyCalendarTwo {
public:
    map<int, int> mp;

    bool book(int start, int end) {
        // Mark the start of an event and the end of an event
        mp[start]++;
        mp[end]--;
        
        int active_events = 0;
        
        // Traverse through the time points and check if any point has more than 2 events overlapping
        for (auto it : mp) {
            active_events += it.second;
            if (active_events >= 3) {
                // Revert changes as this booking cannot be added
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
