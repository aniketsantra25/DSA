class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    // Your code goes here
	    int len = s.length();
	    for(int i=0;i<len/2;i++){
	        if(s[i] != s[len-i-1]){
	            return 0;
	        }
	    }
	    return 1;
	}

};