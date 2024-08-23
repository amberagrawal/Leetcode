class Solution {
public:
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
    string fractionAddition(string expression) {
        vector<int>deno;
        vector<int>num;
        int sign=1;
        int count=0;
        int a=0;
        for(int i=0;i<expression.length();i++){
            if(count==0&&expression[i]>='0'&&expression[i]<='9'){
                 a=a*10+(expression[i]-'0');
            }
            if(expression[i]=='/'){
                num.push_back(a*sign);
                a=0;
                count++;
            }
            if(count==1&&expression[i]>='0'&&expression[i]<='9'){
                a=a*10+(expression[i]-'0');
            }
            if(expression[i]=='+'){
              if(count==1){
              deno.push_back(a);
              count=0;
              a=0;
              }
              sign=1;
            }
            if(expression[i]=='-'){
              if(count==1){
              deno.push_back(a);
              a=0;
              count=0;
              }
              sign=-1;
            }
        }
        deno.push_back(a);
        int b=1;
        for(int i=0;i<deno.size();i++){
            b=lcm(b,deno[i]);
        }
        int i=0;
        while(i < num.size() && i < deno.size()){
            if (deno[i] != 0) {
             num[i] = num[i] * (b / deno[i]);
            } 
            i++;
        }
        int j=0;
        int numerator=0;
        for(int i=0;i<num.size();i++){
            numerator+=num[i];
        }
        int z=gcd(abs(numerator),b);
        numerator=numerator/z;
        b=b/z;
        if(b<0){
            numerator=-1*numerator;
            b=-b;
        }
        return to_string(numerator)+"/"+to_string(b);
    }
};