vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    vector<int> res;
    int carry = 0;
    int i=n-1, j=m-1;
    while(i>=0 && j>=0){
        int sum = a[i--] + b[j--] + carry;
        carry = sum/10;
        sum = sum%10;
        res.push_back(sum);
    }
    while(i>=0){
        int sum = a[i--] + carry;
        carry = sum/10;
        sum = sum%10;
        res.push_back(sum);
    }
    while(j>=0){
        int sum = b[j--] + carry;
        carry = sum/10;
        sum = sum%10;
        res.push_back(sum);
    }
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        res.push_back(sum);
    }
    reverse(res.begin(), res.end());
    return res;
}