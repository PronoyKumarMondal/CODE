#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    char c[n];
    cin>>c;
    for(int i=0;i<n;i++)
    {
        if(c[i]==c[i+1])
        {
          s++;
        }
    }
    cout<<s;
    return 0;
}