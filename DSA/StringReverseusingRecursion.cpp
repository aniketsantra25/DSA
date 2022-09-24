#include <bits/stdc++.h> 
void stringReverse(string &str, int i, int j){
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    stringReverse(str,i,j);
} 
string reverseString(string str)
{
	// Write your code here.
    stringReverse(str,0,str.length()-1);
    return str;
}