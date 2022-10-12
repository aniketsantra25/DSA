class Solution {
public:
    bool isVowel(char x){
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' 
          || x == 'A' || x == 'I' || x == 'E' || x == 'O' || x == 'U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<=j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                //cout<<i<<" "<<j<<endl;
                i++;
                j--;
            }
            else if(isVowel(s[i])){
                j--;
            }
            else{
                i++;
            }
        }
        return s;
    }
};