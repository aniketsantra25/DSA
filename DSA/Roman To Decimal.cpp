class Solution {
  private:
    int findValue(char ch){
        switch(ch){
         case 'I':

            return 1;

         case 'V':

            return 5;

         case 'X':

            return 10;

         case 'L':

            return 50;

         case 'C':

            return 100;

         case 'D':

            return 500;

         case 'M':

            return 1000;

         default:

            return -1;
        }
    }
  public:
    int romanToDecimal(string &str) {
        // code here
        int sum = 0;
        //cout<<str.size();
        for(int i=0;i<str.size();i++){
            int val1 = findValue(str[i]);
            if(i+1<str.size()){
                int val2 = findValue(str[i+1]);
                if(val1<val2){
                    sum += val2-val1;
                    i++;
                    //cout<<"Entered"<<" ";
                }
                else{
                     sum += val1;
                }
                //cout<<i<<" ";
            }
            else{
                sum += val1;
            }
        }
        //cout<<endl;
        return sum;
    }
};