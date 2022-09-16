#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
    string res = "";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            res.push_back('@');
            res.push_back('4');
            res.push_back('0');
        }
        else{
            res.push_back(str[i]);
        }
    }
    return res;
}


//Without Extra Space
#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
    
    string res = "@40";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str.replace(i,1,res);
        }
    }
    return str;
} 