#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if ((a[i + 1] - a[i]) == 1 || a[i + 1] == a[i])
                {
                    f = 1;
                }
                else{
                    f=0;
                }
                if(f==0){
                    break;
                }

            }
            if (f == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}