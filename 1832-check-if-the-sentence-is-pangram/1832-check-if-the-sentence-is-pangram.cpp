class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.length() < 26){
            return false;
        }
        int count[26] = {0};
        for(int i=0;i<sentence.length();i++){
            int charNum = sentence[i] - 'a';
            count[charNum]++;
        }
        for(int i=0;i<26;i++){
            if(count[i] == 0){
                return false;
            }
        }
        return true;
    }
};