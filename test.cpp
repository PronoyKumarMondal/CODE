#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int p = 0, f = 0,l=0;
        char c;
        string s;
        cin >> s;
        set<char> a;
 
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
            a.insert(s[i]);
        }
        p = a.size();
        if (p == 4)
        {
            for (auto i = a.begin(); i != a.end(); i++)
            {
                if (*i == 'm' || *i == 'e' || *i == 'o' || *i == 'w')
                {
                    f = 1;
                }
                else
                {
                    f = 0;
                    break;
                }
            }
            if (f == 1)
            {
                cout << "YES" << endl;
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