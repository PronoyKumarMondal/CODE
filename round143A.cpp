#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, f = 0, k = 0, x = 0, y = 0,c=0;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                f = 1;
                c++;
            }
        }
        for (int i = 0; i < m - 1; i++)
        {
            if (b[i] == b[i + 1])
            {
                k = 1;
                c++;
            }
        }
        if (f == 0 && k == 0)
        {
            cout << "YES" << endl;
        }
        else if((f==1 || k==1) && c<2)
        {
            if (f == 1 && k == 0)
            {
                for (int i = 0; i < n - 2; i++)
                {
                    if (a[i] == a[i + 1] == a[i + 2])
                    {
                        x == 1;
                    }
                }
            }
            if (f == 0 && k == 1)
            {
                for (int i = 0; i < m - 2; i++)
                {
                    if (b[i] == b[i + 1] == b[i + 2])
                    {
                        y == 1;
                    }
                }
            }
            if (a[n - 1] != b[m - 1])
            {
                if (x == 0 && y == 0)
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
             cout << "NO" << endl;
        }
    }

    return 0;
}