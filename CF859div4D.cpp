#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q,b=0;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b+=a[i];
        }
        while (q--)
        {
            int l, r, k, s = 0;
            cin >> l >> r >> k;
            s=b;
            for (int i = (l - 1); i < r; i++)
            {
                s-=a[i];
                s+=k;
            }
            if(s%2==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }

    return 0;
}