class Solution {
public:
    int findComplement(int num) {
        vector<int> bits;
        while(num>0){
            bits.push_back(num%2);
            num = num>>1;
        }
        //reverse(bits.begin(), bits.end());
        for(int i=0;i<bits.size();i++){
            if(bits[i] == 0){
                bits[i] = 1;
            }
            else{
                bits[i] = 0;
            }
        }
        int factor = 1;
        //int number = 0;
        for(int i=0;i<bits.size();i++){
            num = num+bits[i]*factor;
            factor = factor<<1;
        }
        return num;
    }
};