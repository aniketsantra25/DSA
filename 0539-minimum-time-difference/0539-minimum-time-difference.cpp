class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        std::vector<int> t;
        for(auto w:timePoints)
        {
            int h= stoi(w.substr(0, 2));
            t.push_back((h*60) + stoi(w.substr(3,2)));
        }
        std::sort(t.begin(), t.end());
        
        for(auto min:t)
        {
            std::cout<<min<<",";
        }
        
        int ans = 1439;
        for(int i=0; i<(t.size()-1); i++)
        {
            if(t[i]==0 && t[i+1]==0)
            {
                 ans = 0;
            }
            else if(t[i]==0 && t[i+1]!=0)
            {
                int tmp1 = min(abs(0-t[i+1]), 1440-t[i+1]);
                int tmp2 = min(abs(0-t[t.size()-1]), (1440-t[t.size()-1]));
                int tmp = min(tmp1, tmp2);
                ans= min(ans, tmp);
            }      
            else
            {
                int tmp1 = min(abs(t[i]-t[i+1]), t[0]+(1440-t[i+1]));
                ans = std::min(ans, tmp1);
            }
        }
        return ans;
    }
};