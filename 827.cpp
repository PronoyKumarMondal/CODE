#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r = 0;
        
        string p;
        for (int i = 0; i < 8; i++)
        {
            cin >> p;
            if (p == "RRRRRRRR")
                {r = 1;}
        }
        if (r == 1)
        {
            cout << "R" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }

    return 0;
}