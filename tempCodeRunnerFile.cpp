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
        for(int i=0;i<n;i++){
           if(s[i]=='a'){
            s[i]=0;
           }
           if(s[i]=='b'){
              s[i]=1;
           }
           if(s[i]=='c'){
            s[i]=1;
           }
        }
        for(int i=0;i<n;i++){
           if(s[i]!=0 && s[i]!=1){
              f=1;
              break;
           }
        }
        if(f==1){
           cout<<"YES"<<endl; 
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}