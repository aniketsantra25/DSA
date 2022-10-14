class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag = 0,size = 0;
        for(int n=s.size()-1;n>=0;n--){
            if(!flag && s[n]!=' ') flag = 1;
            else if(flag && s[n]==' ') break;
            else if(flag) size++;
        }
        return size+1;
    }
};