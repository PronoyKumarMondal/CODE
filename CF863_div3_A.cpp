#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char d;
        cin >> n >> d;
        string S;
        cin >> S;
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (S[i] < d)
            {
                break;
            }
            k=i+1;
        }
        S.insert(k, 1, d);
        cout << S << endl;
    }

    return 0;
}