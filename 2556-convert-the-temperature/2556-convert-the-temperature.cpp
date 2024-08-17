class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        double k=celsius+273.15;
        double f=1.8*celsius+32.00;
        vector<double>v;
        v.push_back(k);
        v.push_back(f);
        return v;
    }
};