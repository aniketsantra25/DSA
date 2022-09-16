class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                //cout<<s[i]<<endl;
                st.push(s[i]);
            }
            else if(!st.empty()){
                if(st.top() == s[i]){
                    char ch = st.top();
                    //cout<<ch<<endl;
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        string s1 = "";
        while(!st.empty()){
            char ch = st.top();
            st.pop();
            s1 += ch;
        }
        reverse(s1.begin(), s1.end());
        return s1;
    }
};