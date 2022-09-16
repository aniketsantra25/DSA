class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex = 0;
        int n = chars.size();
        while(i<n){
            int j = i+1;
            while(j<n && chars[i] == chars[j]){
                j++;
            }
            // The above loop will end either j has traversed the whole array or a new character is there in the array 
            chars[ansIndex++] = chars[i];
            int count = j-i;
            if(count>1){
                string cnt = to_string(count);
                for(char c:cnt){
                    chars[ansIndex++] = c;
                }
            }
            i=j;
        }
        return ansIndex;
    }
};