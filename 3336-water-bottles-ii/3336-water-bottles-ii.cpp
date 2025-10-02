class Solution {
public:
    int maxBottlesDrunk(int f, int e) {
        int c=0;
        int ex=0;
        while(true){
            cout<<f<<" ";
            c=c+f;
            ex+=f;
            f=0;
            bool a=false;
            while(ex>=e){
                f++;
                a=true;
                ex=ex-e;
                e++;
            }
            if(!a){
                break;
            }
        }
        return c+f;
    }
};