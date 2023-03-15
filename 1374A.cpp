#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, k;
        cin >> x >> y >> n;
        k=((n-y)/x);
        int a=((k*x)+y);
        cout<<a<<endl;
    }

    return 0;
}