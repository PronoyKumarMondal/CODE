#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, c = 0, ans;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                count++;
            }
        }
        
       if(count==0)
       {
        cout << 1 << endl;
       }
        else if ((count % 2) == 0)
        {
            int k=(count/2);
            for (int i = 1; i <= n; i++)
            {  if (k==c)
                {
                    ans = i-1;
                    break;
                }
 
                if (a[i] == 2)
                {
                    c++;
                }
            }
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
 
    return 0;
}