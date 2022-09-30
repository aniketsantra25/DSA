class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, string>m;
        m[1]  ="I";
        m[5] = "V";
        m[10] = "X";
        m[50] = "L";
        m[100] = "C";
        m[500] = "D";
        m[1000] = "M";
        int x = 1;
        string s = "";
        while(num>0){
            int a = num%10;
            a *= x;
            while(a>0){
                if(m.find(a)!=m.end()){
                    s = m[a]+s, a=0;
                }
                else if(m.find(a+x)!=m.end())
                    s=m[x]+m[a+x]+s,a=0;
                else 
                    s=m[x]+s,a-=x; 
            }
            num/=10;
            x*=10;
        }
        return s;
        
    }
};