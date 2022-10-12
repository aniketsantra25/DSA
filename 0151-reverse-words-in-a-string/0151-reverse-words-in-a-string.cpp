class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string temp = "";
        int len = s.length();
        int i = 0;
        while(i<len){
            if(s[i]!=' '){
                temp += s[i];
            }
            else{
                 if(ans!=""){
                   if(temp!="")
                       ans = temp+" "+ans;
               }
               else
                   ans = temp;
               temp ="";
           }
           i++;  
        }
         if(temp!=""){
            if(ans=="")
                ans = temp;
            else
                ans = temp+" "+ans;
        }
        
        return ans;
    }
};