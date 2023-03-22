#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m=0,b=0;
        cin>>n;
        int k;
        for(int i=0;i<n;i++){
             cin>>k;
             if(k%2==0){
                m+=k;
             }
             else{
                b+=k;
             }
        }
        if(m>b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}