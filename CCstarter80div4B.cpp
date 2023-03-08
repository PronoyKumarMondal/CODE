#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int s=0,c=1;
        
        s+=z;
        while(1){
            if(s>=x){
                break;
            }
            s+=y;
            c++;
        }
        cout<<c<<endl;
    }

    return 0;
}