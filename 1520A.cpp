#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f=0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                for(int j=i+1;j<n;j++){
                    if(s[i]==s[j]){
                        f=1;
                        break;
                    }
                }
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