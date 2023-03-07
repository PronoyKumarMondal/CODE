#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        int e = 2;
        int o = 0;
        int a[n];
        if (n % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " ";
                s += i;
            }
            for (int i = 1; i < n - 2; i += 2)
            {
                cout << i << " ";
                o += i;
            }
            cout << s - o << endl;
        }
    }

    return 0;
}
