#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,c=0;
        cin >> n;
        int a[n];
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n-1; i++)
        {
           if(a[i]!=a[i+1]){
            a[i+1]=a[i];
            c++;

           }
        }
        cout<<c<<endl;
        
    }

    return 0;
}