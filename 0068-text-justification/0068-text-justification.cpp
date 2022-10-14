class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int l = 0, r = 0;
        vector<string> ans;
        while (r < words.size()) {
            int len = words[r++].size();
            while (r < words.size() && len + words[r].size() + 1 <= maxWidth) {
                len += words[r].size() + 1;
                r++;
            }
            r--;
            int num = maxWidth - len;
            if (r == words.size() - 1) {
                string tmp = words[l];
                for (int i = l + 1; i <= r; i++)
                    tmp = tmp + " " + words[i];
                tmp = tmp + string(num, ' ');
                ans.push_back(tmp);
                break;
            }
            if (l == r) {
                string tmp = words[l] + string(num, ' ');
                ans.push_back(tmp);
                l = r = r + 1;
                continue;
            }
            int every = num / (r - l) + 1;
            num %= (r - l);
            string tmp = words[l];
            for (int i = l + 1; i <= r; i++) {
                tmp = tmp + string(every + (num ? 1 : 0), ' ') + words[i];
                if (num)
                    num--;
            }
            ans.push_back(tmp);
            l = r = r + 1;
        }
        return ans;
    }
};