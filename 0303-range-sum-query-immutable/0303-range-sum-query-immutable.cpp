class NumArray {
public:
    vector<int>v;
    NumArray(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        v=nums;
    }
    
    int sumRange(int left, int right) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int sum=0;
        for(int i=left;i<=right;i++){
            sum=sum+v[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */