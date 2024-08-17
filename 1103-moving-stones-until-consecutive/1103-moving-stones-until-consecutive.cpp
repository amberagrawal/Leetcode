class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int>v1={a,b,c};
        sort(v1.begin(),v1.end());
        int x=abs(v1[0]-v1[1])-1;
        int y=abs(v1[1]-v1[2])-1;
        vector<int>v;
        if(x==0&&y!=0){
            v.push_back(1);
        }
        else if(x!=0&&y==0){
            v.push_back(1);
        }
        else if(x==1||y==1){
            v.push_back(1);
        }
        else if(x>1&&y>1){
            v.push_back(2);
        }
        else if(x==0&&y==0){
            v.push_back(0);
            v.push_back(0);
            return v;
        }
        v.push_back(x+y);
        return v;
    }
};