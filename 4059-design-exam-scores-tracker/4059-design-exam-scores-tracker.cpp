class ExamTracker {
    vector<int> times;
    vector<long long> prefix;
public:
    ExamTracker() {}
    void record(int time, int score) {
        times.push_back(time);
        long long newSum = score + (prefix.empty() ? 0 : prefix.back());
        prefix.push_back(newSum);
    }

    long long totalScore(int startTime, int endTime) {
        int l = lower_bound(times.begin(), times.end(), startTime) - times.begin();
        int r = upper_bound(times.begin(), times.end(), endTime) - times.begin() - 1;
        if (l >= times.size() || r < 0 || l > r){
            return 0; 
        }
        long long leftSum = (l == 0 ? 0 : prefix[l - 1]);
        long long rightSum = prefix[r];
        return rightSum - leftSum;
    }
};
