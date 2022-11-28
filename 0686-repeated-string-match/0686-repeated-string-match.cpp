class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string temp = "";
        int count = 0;
        while(temp.size()<b.size())
        {
            temp+=a;
            count++;
        }
        if(found(temp,b))
        {
          return count;
        }
        count++;
        temp+=a;
        if(found(temp,b))
            return count;
        return -1;
    }
    bool found(string &s,string &pat)
    {
        int n = s.size();
        int m = pat.size();
        int p = 31;
        int mod = 1e9+7;
        long long int pat_hash = 0;
        long long int p_pow = 1;
        for(char c: pat)
        {
            pat_hash =(pat_hash+(c-'a'+1)*p_pow)%mod;
            p_pow = (p_pow*p)%mod;
        }
        vector<long long int>primeP(n,1);
        for(int i=1;i<n;i++)
        {
            primeP[i] =(primeP[i-1]*p)%mod; 
        }
        vector<long long int>h(n+1,0);
        for(int i=0;i<n;i++)
        {
            h[i+1] =(h[i]+(s[i]-'a'+1)*primeP[i])%mod; /// calculating the hash values of substrings [0....i]
        }
        for(int i=0;i+m-1<n;i++)
        {
            int curr_hash = (h[i+m]+mod-h[i])%mod;/// calculating hash value of the substring(i,i+m)
            if(curr_hash==pat_hash*primeP[i]%mod)/// checking for a match
                return true;
        }
        return false;
    }
};