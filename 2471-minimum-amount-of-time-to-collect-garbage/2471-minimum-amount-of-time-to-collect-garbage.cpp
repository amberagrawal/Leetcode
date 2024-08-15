class Solution {
public:
int count1(const std::string& str, char sub) {
    int count = 0;
    size_t pos = str.find(sub);

    while (pos != std::string::npos) {
        ++count;
        pos = str.find(sub, pos +1);
    }

    return count;
}
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
       int timeM=0;
       int index1=-1;
       int index2=-1;
       int index3=-1;
       int timeP=0;
       int timeG=0;
       for(int i=0;i<garbage.size();i++){
        char ch='M';
        if(count1(garbage[i],ch)>0){
            timeM=timeM+count1(garbage[i],ch);
            index1=i;
        }
       }
       for(int i=0;i<garbage.size();i++){
        char ch='P';
        if(count1(garbage[i],ch)>0){
            timeP=timeP+count1(garbage[i],ch);
            index2=i;
        }
       }
       for(int i=0;i<garbage.size();i++){
        char ch='G';
        if(count1(garbage[i],ch)>0){
            timeG=timeG+count1(garbage[i],ch);
            index3=i;
        }
       }
       vector<int>time(garbage.size(),0);
       for(int i=1;i<garbage.size();i++){
        time[i]=time[i-1]+travel[i-1];
       }
       int total=timeM+timeP+timeG;
       if(index1!=-1){
        total=total+time[index1];
       }
       if(index2!=-1){
        total=total+time[index2];
       }
       if(index3!=-1){
        total=total+time[index3];
       }
       return total;
    }
};