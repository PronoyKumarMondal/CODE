#include<iostream>
using namespace std;
int main()
{
    long long int a;
    int i=0;
    cin>>a;
    while(a)
    {
        if(a%10==4 || a%10==7)
        {
          i++;
        }
        a=(a/10);
    }
    if(i==4 || i==7)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}