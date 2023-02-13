#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    char s[n - 1];
    cin >> s;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G' && j + 1 < n)
            {
                s[j + 1] = 'B';
                s[j] = 'G';
                j++;
            }
        }
    }
    cout << s;
    return 0;
}