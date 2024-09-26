class MyCalendar {
public:
    vector<pair<int,int>>c;
    bool book(int start, int end) {
        for(int i=0;i<c.size();i++){
             if(start<c[i].second&&c[i].first<end){
                return false;
            }
        }
        c.emplace_back(start,end);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */