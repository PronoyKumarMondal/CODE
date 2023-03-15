#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m = 0, c = 0;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            m++;
        }
        if (y > x)
        {
            c++;
        }
    }
    if (m > c)
    {
        cout << "Mishka" << endl;
    }
    else if (c > m)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}