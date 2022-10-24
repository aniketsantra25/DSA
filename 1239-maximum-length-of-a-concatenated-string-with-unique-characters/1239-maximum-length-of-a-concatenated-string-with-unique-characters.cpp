class Solution {
public:
    int is_unique_len(string curr_s){
        unordered_map<char,int> mpp;
        for(char c:curr_s){
            mpp[c]++;
            if(mpp[c]>1) return 0;
        }
        return mpp.size();
    }
    void solve(vector<string>& arr_filt, int n, string curr_s, int& ans){
        if(n==0) return;
        
        int temp_ans;
        
        // exclude case
        temp_ans = is_unique_len(curr_s);
        solve(arr_filt, n-1, curr_s, ans);
        ans = max(ans, temp_ans);
        
        // include case
        curr_s = arr_filt[n-1] + curr_s;
        temp_ans = is_unique_len(curr_s);
        if(temp_ans){
            solve(arr_filt, n-1, curr_s, ans);
        }
        ans = max(ans, temp_ans);
        
    }
    int maxLength(vector<string>& arr) {
        vector<string> arr_filt;
        int ans, temp_ans;
        ans = INT_MIN;
        for(string s:arr){
            temp_ans = is_unique_len(s);
            if(temp_ans) arr_filt.push_back(s);
            ans = max(ans, temp_ans);
        }
        int n = arr_filt.size();
        if(n!=0) solve(arr_filt, n, "", ans);
        return ans;
    }
};