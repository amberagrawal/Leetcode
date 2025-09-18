class TaskManager {
public:
    // store {priority, taskId}, break ties by taskId (larger wins)
    struct cmp {
        bool operator()(const pair<int,int>&a, const pair<int,int>&b) const {
            if(a.first == b.first) return a.second > b.second;
            return a.first > b.first; // higher priority first
        }
    };

    unordered_map<int,int> taskToUser;   // taskId -> userId
    unordered_map<int,int> taskToPrio;   // taskId -> priority
    set<pair<int,int>, cmp> pq;          // {priority, taskId}

    TaskManager(vector<vector<int>>& v) {
        for(auto &x : v){
            int u = x[0], t = x[1], p = x[2];
            taskToUser[t] = u;
            taskToPrio[t] = p;
            pq.insert({p,t});
        }
    }

    void add(int u, int t, int p) {
        taskToUser[t] = u;
        taskToPrio[t] = p;
        pq.insert({p,t});
    }

    void edit(int t, int p) {
        int old = taskToPrio[t];
        pq.erase({old,t});   // O(log n)
        taskToPrio[t] = p;
        pq.insert({p,t});
    }

    void rmv(int t) {
        int old = taskToPrio[t];
        pq.erase({old,t});   // O(log n)
        taskToPrio.erase(t);
        taskToUser.erase(t);
    }

    int execTop() {
        if(pq.empty()) return -1;
        auto [p,t] = *pq.begin(); 
        pq.erase(pq.begin());
        int u = taskToUser[t];
        taskToUser.erase(t);
        taskToPrio.erase(t);
        return u;
    }
};
