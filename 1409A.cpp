#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c = 0, n;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0" << endl;
        }
        else
        {
            if (b > a)
            {
                int temp = a;
                a = b;
                b = temp;
            }
            n = (a - b);
           
            for (int i = 10; i > 0; i--)
            {
                if (n >= i)
                {
                    c += (n / i);
                    n = (n % i);
                }
                if(n==0)
                {
                    break;
                }
            }
            cout<<c<<endl;
        }
    }

    return 0;
}