#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, c = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((a[i] + k) < 6)
        {
            c++;
        }
    }
    cout << (c / 3) << endl;

    return 0;
}