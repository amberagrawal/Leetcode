class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> maxHeap(nums.begin(), nums.end());
        long long total = 0;

        while (k--) {
            int largest = maxHeap.top(); 
            maxHeap.pop(); 
            total += largest;
            maxHeap.push(ceil(largest / 3.0));
        }

        return total;
    }
};