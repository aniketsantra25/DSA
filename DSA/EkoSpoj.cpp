#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli a[10000001];
 
bool solve(lli mid,lli n,lli m)
{
    lli i,collected=0;
    for(i=0;i<n;i++)
    {
        if( a[i] > mid )
        {
            collected+=(a[i]-mid);
        }
    }
    if(collected>=m)
    {
        return true;
    }
    else
    {
        return false;
    }
}
 
int main(void)
{
    lli n,i,j,m,ans=0,l=0,h=-1,mid;
    
    cin>>n>>m;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
         
        h=max(h,a[i]);
    }
    
    while(l<=h)
    {
        mid=(l+h)/2;
        
        if(solve(mid,n,m))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    
    cout<<ans;
    
    return 0;
}