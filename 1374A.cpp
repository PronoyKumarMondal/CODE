#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, k=0;
        cin >> x >> y >> n;
        for (int i =n ; i > 0; i--)
        {
            if (i % x == y)
            {
                k = i;
                break;
            }
        }
        cout << k << endl;
    }

    return 0;
}