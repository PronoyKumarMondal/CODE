#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i += 2)
        {
            for (int j = 1; j < n; j += 2)
            {
                if (s[i] == s[j])
                {

                    f = 1;
                }
            }
        }

        if (f == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}