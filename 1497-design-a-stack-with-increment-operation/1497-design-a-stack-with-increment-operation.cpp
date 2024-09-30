class CustomStack {
public:
    stack<int>s; 
    int size;
    CustomStack(int maxSize) {
       size=maxSize;
    }
    
    void push(int x) {
        if(s.size()<size){
        s.push(x);
        }
    }
    
    int pop() {
        if(!s.empty()){
            int a=s.top();
            s.pop();
            return a;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        vector<int>v;
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        for(int i=v.size()-1;i>=0;i--){
            if(k>0){
                v[i]=v[i]+val;
                k--;
            }
        }
        for(int i=v.size()-1;i>=0;i--){
            s.push(v[i]);
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */