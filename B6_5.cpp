#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    if(n<=0){
        for(int i =1;i>=n;i--){
            s+=i;
          
        }
    }
    else{
        for(int i =1;i<=n;i++){
            s+=i;
          
        }

    }
    cout<<s<<endl;

    return 0;
}