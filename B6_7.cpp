#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,c=0,a;
        cin>>k;
        for(int i=2;i<=163841;i++){
            int s=0;
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    s++;
                }
            }
            if(s==2){
                c++;
            }
            if(c==k){
                a=i;
                break;
            }

        }
        cout<<a<<endl;
    }


    return 0;
}