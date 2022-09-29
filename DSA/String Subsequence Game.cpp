class Solution {
  private:
   bool isVowel(char x){
        if (x == 'a' || x == 'e' || x == 'i' ||
                   x == 'o' || x == 'u')
        return true;
    else
        return false;
   }
    void solve(string s, int index, string &output, set<string> &ans){
        //base case
        if(index >= s.length()){
            if(output.size()>=2){
                if((isVowel(output[0])) && (!isVowel(output[output.size()-1]))){
                    ans.insert(output);
                }
            }
            return;
        }
        
        solve(s, index+1, output, ans);
        char element = s[index];
        output.push_back(element);
        solve(s, index+1, output, ans);
        output.pop_back();
    }
  public:
    set<string> allPossibleSubsequences(string S) {
        // code here
        set<string> ans;
        string output;
        solve(S, 0, output, ans);
        return ans;
    }
};