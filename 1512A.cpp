#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, c = 0, ans = 0;
        cin >> n;
        int a[n];
        cin >> a[0];
        s = a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (s == a[i])
            {
                c++;
            }
        }
        if (c == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != s)
                {
                    ans = i;
                    break;
                }
            }
            cout << ans + 1 << endl;
        }
    }

    return 0;
}