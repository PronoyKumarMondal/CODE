#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,c=0;
        cin >> n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if((a[i]<((2*b[i])+1)) && (b[i]<((2*a[i])+1))){
                c++;

            }
        }
        cout<<c<<endl;
        

        

    }

    return 0;
}