class Solution {
public:
    int minChar(string str){
        //Write your code here
        int i = 0, j = str.length() - 1;
       int last = j;
       int ans = 0;
       
       while(i <= j) {
           
           if(str[i] == str[j]) {
               i++;
               j--;
           }
           else {
               ans++;
               i = 0;
               j = --last;
           }
       }
       
       return ans;
    }
};