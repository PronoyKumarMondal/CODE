#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c,sum=0,sum1=0,sum2=0;
    while(t--)
    {
        cin>>a>>b>>c;
        sum+=a;
        sum1+=b;
        sum2+=c;
    }
    if(sum==0 && sum1==0 && sum2==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}