#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = n - 1, s = 0, d = 0, c = 0;
    while (1)
    {
       
        if (c % 2 == 0 || c == 0)
        { 
            if(i==j){
                s+=a[i];
                break;
            }
            else if (a[i] > a[j])
            {
                s += a[i];
                i++;
            }
            else
            {
                s += a[j];
                j--;
            }
        }
        else
        {
            if(i==j){
                d+=a[i];
                break;
            }
            else if (a[i] > a[j])
            {
                d += a[i];
                i++;
            }
            else
            {
                d += a[j];
                j--;
            }
        }

        c++;
    }
    cout<<s<<" "<<d<<endl;

    return 0;
}