#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,f=0;
        cin>>n;
        string s;
        cin>>s;
        int a[n];
        for(int i=0;i<n;i++){
           if(s[i]=='a'){
            
            a[i]=0;
           }
           else if(s[i]=='b'){
              a[i]=1;
           }
           else if(s[i]=='c'){
            a[i]=1;
           }
           else{
            a[i]=3;
           }
        }
        for(int i=0;i<n;i++){
           if(a[i]==3){
            
              f=1;
              break;
           }
        }
        if(f==0){
           cout<<"YES"<<endl; 
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}