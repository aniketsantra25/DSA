class Solution {
public:
    long long operation(long long ltval, long long rtval, char op){
        switch(op){
            case '+':
                return ltval+rtval;
            case '-':
                return ltval-rtval;
            case '*':
                return ltval*rtval;
            case '/':
                return ltval/rtval;
            default:
                return 0;
        }
    }
    bool isNumber(string val){
        try{
            int n = stoi(val);
            return true;
        }
        catch(exception e){
            return false;
        }
    }
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(auto i:tokens){
            string temp = i;
            if(isNumber(temp)){
                st.push(temp);
            }
            else{
                char op = temp[0];
                long long rtval = stoll(st.top());
                st.pop();
                long long ltval = stoll(st.top());
                st.pop();
                long long res = operation(ltval, rtval, op);
                st.push(to_string(res));
            }
        }
        return stoi(st.top());
    }
};