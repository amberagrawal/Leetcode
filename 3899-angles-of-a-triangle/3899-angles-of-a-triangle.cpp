class Solution {
public:
    vector<double> internalAngles(vector<int>& nums) {
        double a=nums[0];
        double b=nums[1];
        double c=nums[2];
        if(a+b>c&&b+c>a&&a+c>b){
            vector<double>v;
            double cosC = (a*a + b*b - c*c) / (2*a*b);
            double cosB = (a*a + c*c - b*b) / (2*a*c);
            double cosA = (c*c + b*b - a*a) / (2*c*b);
             double aC = acos(cosC);
             double dC = aC * (180.0 / M_PI);
              double aA = acos(cosA);
             double dA = aA * (180.0 / M_PI);
              double aB = acos(cosB);
             double dB = aB * (180.0 / M_PI);
            v.push_back(dC);
            v.push_back(dB);
            v.push_back(dA);
            sort(v.begin(),v.end());
            return v;
        }
        else{
            return {};
        }
        return {};
    }
};