#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c = 0, i = 10;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0" << endl;
        }
        else
        {
            if (a > b)
            {
                while (1)
                {
                    if (a == b)
                    {
                        break;
                    }

                    if ((a - i) >= b)
                    {
                        a -= i;
                        c++;
                    }
                    if ((a - b) < i)
                    {
                        i--;
                    }
                }

                cout << c << endl;
            }
            else
            {
                while (1)
                {
                    if (a == b)
                    {
                        break;
                    }

                    if ((a + i) <= b)
                    {
                        a += i;
                        c++;
                    }
                    if ((b - a) < i)
                    {
                        i--;
                    }
                }

                cout << c << endl;
            }
        }
    }

    return 0;
}