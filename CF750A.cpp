#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int x,y,s=0,ans=0,tt=240;
   cin>>x>>y;
   int n=tt-y;
   for(int i=1;i<=x;i++)
   {
    s+=(i*5);
    if(s<=n)
    ans=i;
    else break;
 
   }
   cout<<ans<<endl;
 
 
    return 0;
}