class Solution {
public:
    string reverseWords(string s) {
        int lastSpaceIndex = -1;
        for(int i=0;i<=s.length();i++){
            if(i==s.length() || s[i] == ' '){
                int startIndex = lastSpaceIndex+1;
                int endIndex = i-1;
                while(startIndex < endIndex){
                    char temp = s[startIndex];
                    s[startIndex] = s[endIndex];
                    s[endIndex] = temp;
                    startIndex++;
                    endIndex--;
                }
                lastSpaceIndex = i;
            }
        }
        return s;
    }
};