#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i=1;
    cin>>n>>k;
    while(1)
    {
        
        if(((n*i)%10) == k || ((n*i)%10)==0)
        {
            cout<<i<<endl;
            break;
        }
        i++;
 
    }
 
 
    return 0;
}