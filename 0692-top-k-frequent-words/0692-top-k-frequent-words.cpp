class Solution {
static bool cmp(pair<string, int> a, pair<string, int> b) {
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}
public:
    vector<string> topKFrequent(vector<string>& words, int k)
    {
        map<string, int> mp;

        for(int i = 0; i < words.size(); i++)
        {
            mp[words[i]]++;
        }

        vector<pair<string, int>> srt;

        for(auto it:mp)
        {
            srt.push_back(it);
        }

        sort(srt.begin(), srt.end(), cmp);

        vector<string> ans;

        for(int i = 0; i < k; i++)
        {
            ans.push_back(srt[i].first);
        }

        return ans;
    }
};