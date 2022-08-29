// Using Array without bit manipulation
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    int binary[32];
    int i = 0;
    while(n!=0){
      binary[i] = n%2;
      n = n/2;
      i++;
    }
    for(int j = i-1;j>=0;j--){
      cout<<binary[j];
    }
    
    return 0;
  }

// using bit manipulation
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    int bit, i=0, ans = 0;
    while(n!=0){
      bit = n&1;
      ans = ans+(bit*pow(10,i));
      n = n>>1;
      i++;
    }
    cout<<ans;
    return 0;
  }