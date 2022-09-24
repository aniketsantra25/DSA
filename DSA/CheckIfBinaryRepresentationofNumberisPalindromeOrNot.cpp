#include <bits/stdc++.h> 
bool isPalindrome(string str, int s, int e){
    if(s>e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    s++;
    e--;
    return isPalindrome(str,s,e);
}
bool checkPalindrome(long long n)
{
	// Write your code here.
    string binary = "";
    while(n>0){
        binary.push_back(n%2);
        n=n/2;
    }
    long long size = binary.length();
    return isPalindrome(binary,0, size-1);
}