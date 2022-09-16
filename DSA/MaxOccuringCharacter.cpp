class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int freq[26] = {0};
        for(int i=0;i<str.length();i++){
            char ch = str[i];
            int number = ch-'a';
            freq[number]++;
        }
        int maxi = -1, ans = 0;
        for(int i=0;i<26;i++){
            if(maxi<freq[i]){
                ans = i;
                maxi = freq[i];
            }
        }
        return ans+'a';
        
    }

};