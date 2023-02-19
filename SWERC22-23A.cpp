#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0,s=0,l=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n ; i++)
        {
            cin >> a[i];
            if(a[0]>120)
            {
                f+=1;
            }
            if(a[0]>240)
            {
                f+=2;
            }
            l=l+a[i];
           

        }
        for (int i = 0; i < n - 1; i++)
        {
            if ((a[i + 1] - a[i]) >= 120)
            {
               s=(s+(a[i + 1] - a[i]));
            }
        }
        if(s>=240 || l<=1199 || f==2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}