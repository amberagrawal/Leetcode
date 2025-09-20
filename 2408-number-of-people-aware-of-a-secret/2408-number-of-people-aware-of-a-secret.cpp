class Solution {
public:
    const int mod=1e9+7;
    int peopleAwareOfSecret(int n, int d, int f) {
        queue<pair<int,int>>res;
        int act=0;
        queue<pair<int,int>>frg;
        res.push({1,d+1});
        frg.push({1,f+1});
        for(int i=1;i<=n;i++){
            while(!frg.empty()&&frg.front().second==i){
                act=(act-frg.front().first+mod)%mod;
                frg.pop();
            }
            while(!res.empty()&&res.front().second==i){
                act=(act+res.front().first)%mod;
                res.pop();
            }
            if(act>0){
            res.push({act,i+d});
            frg.push({act,i+f});
            }
            //cout<<act+res.size()<<" ";
        }
        while(!res.empty()){
            act=(act+res.front().first)%mod;
            res.pop();
        }
        return act;
    }
};