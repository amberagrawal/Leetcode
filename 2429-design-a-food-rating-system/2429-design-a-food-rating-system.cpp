class FoodRatings {
public:
    map<string,int> mp;                     
    map<string,string> fc;                  
    map<string,set<pair<int,string>>> foods;
    FoodRatings(vector<string>& foodsList, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0; i < foodsList.size(); i++) {
            string food = foodsList[i];
            string cuisine = cuisines[i];
            int rate = ratings[i];

            mp[food] = rate;
            fc[food] = cuisine;
            foods[cuisine].insert({-rate, food}); 
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisine = fc[food];
        int oldRating = mp[food];
        mp[food] = newRating;
        foods[cuisine].erase({-oldRating, food});
        foods[cuisine].insert({-newRating, food});
    }
    
    string highestRated(string cuisine) {
        return foods[cuisine].begin()->second;
    }
};
