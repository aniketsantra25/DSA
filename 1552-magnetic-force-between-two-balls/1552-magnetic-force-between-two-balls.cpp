class Solution {
public:
    bool isValid(long long x, vector<int> A, long long m){
        int m_placed = 1, last_pos = A[0];
        for (int i = 1; i < A.size(); i++)
        {
            if ((A[i] - last_pos) >= x)
            {
                if (++m_placed == m)
                    return true;
                last_pos = A[i];
            }
        }
         return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        long long low = 0, high = 1000000000, mid, ans = 0;
        while(low<=high){
            mid = low+(high-low)/2;
            if(isValid(mid, position, m)){
                low = mid+1;
                ans = mid;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};