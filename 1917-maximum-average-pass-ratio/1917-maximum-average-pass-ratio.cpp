class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& nums, int ex) {
        priority_queue<pair<double, pair<int,int>>> pq;
        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i][0];
            int b = nums[i][1];
            double gain = (double)(a + 1) / (b + 1) - (double)a / b;
            pq.push({gain, {a, b}});
        }
        for (int i = 0; i < ex; i++) {
            auto p = pq.top();
            pq.pop();
            int a = p.second.first;
            int b = p.second.second;
            a++;
            b++;
            double gain = (double)(a + 1) / (b + 1) - (double)a / b;
            pq.push({gain, {a, b}});
        }
        double total = 0;
        while (!pq.empty()) {
            auto p = pq.top();
            pq.pop();  
            int a = p.second.first;
            int b = p.second.second;
            total += (double)a / b;
        }
        return total / nums.size();
    }
};
