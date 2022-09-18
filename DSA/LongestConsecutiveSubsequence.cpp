class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            map<int, int> m;
            vector<int> res;
            int temp = INT_MIN;
            for(int i=0;i<n1;i++){
                if(temp != A[i]){
                    m[A[i]]++;
                    temp = A[i];
                }
            }
            temp = INT_MIN;
             for(int i=0;i<n2;i++){
                if(temp != B[i]){
                    m[B[i]]++;
                    temp = B[i];
                }
            }
            temp = INT_MIN;
             for(int i=0;i<n3;i++){
                if(temp != C[i]){
                    m[C[i]]++;
                    temp = C[i];
                }
            }
            
            for(auto i:m){
                if(i.second==3){
                    res.push_back(i.first);
                }
            }
            //reverse(res.begin(), res.end());
            return res;
            
           
            
        }

};