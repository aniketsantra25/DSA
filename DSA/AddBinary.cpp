class Solution {
public:
    string addBinary(string a, string b) {
        int l1 = a.length()-1;
        int l2 = b.length()-1;
        int sum = 0, carry = 0;
        string res = "";
        while(l1>=0 && l2>=0){
            sum = a[l1] - '0' + b[l2] - '0' + carry;
            if(sum == 0){
                res.push_back('0');
                carry = 0;
            }
            else if(sum == 1){
                res.push_back('1');
                carry = 0;
            }
            else if(sum == 2){
                res.push_back('0');
                carry = 1;
            }
            else if(sum == 3){
                res.push_back('1');
                carry = 1;
            }
            l1--;
            l2--;
        }
        while(l1>=0){
            sum = a[l1] - '0' + carry;
            if(sum == 0){
                res.push_back('0');
                carry = 0;
            }
            else if(sum == 1){
                res.push_back('1');
                carry = 0;
            }
            else if(sum == 2){
                res.push_back('0');
                carry = 1;
            }
            else if(sum == 3){
                res.push_back('1');
                carry = 1;
            }
            l1--;
        }
         while(l2>=0){
            sum = b[l2] - '0' + carry;
            if(sum == 0){
                res.push_back('0');
                carry = 0;
            }
            else if(sum == 1){
                res.push_back('1');
                carry = 0;
            }
            else if(sum == 2){
                res.push_back('0');
                carry = 1;
            }
            else if(sum == 3){
                res.push_back('1');
                carry = 1;
            }
            l2--;
        }
        if(carry == 1){
            res.push_back('1');
        }
        reverse(res.begin(), res.end());
        return res;
    }
    
};