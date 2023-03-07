#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<max){
            int t=(max-a[i]);
            sum+=t;
        }
    }

    cout<<sum<<endl;


    return 0;
}