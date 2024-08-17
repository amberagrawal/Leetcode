class Solution {
public:
    int maxCoins(vector<int>& piles) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
     sort(piles.rbegin(),piles.rend());
     int count=0;
     int j=piles.size();
     for(int i=1;i<j;i=i+2){
        count=count+piles[i];
        j--;
     } 
     return count;  
    }
};