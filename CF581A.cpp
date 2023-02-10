#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,y,s;
    cin>>x>>y;
    if(x==y)
    {
        cout<<x<<" ";
        cout<<0<<endl;
    }
    else if(x>y)
    {
        s=x-y;
        cout<<y<<" ";
        cout<<(s/2)<<endl;
    }
    else{
        s=y-x;
        cout<<x<<" ";
        cout<<(s/2)<<endl;
    }
 
    return 0;
}