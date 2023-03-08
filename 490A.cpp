#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c1=0,c2=0,c3=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1){
            c1++;
        }
        if(a[i]==2){
            c2++;
        }
        if(a[i]==3){
            c3++;
        }
    }
    int t=min(c1,min(c2,c3));
    if(t==0){
        cout<<0<<endl;
    }
    else{
        cout<<t<<endl;
        while(t!=0){
            for(int i=0;i<n;i++){
               if(a[i]==1){
                cout<<i+1<<" ";
                a[i]=0;
                break;
               }
            }
            for(int i=0;i<n;i++){
               if(a[i]==2){
                cout<<i+1<<" ";
                a[i]=0;
                break;
               }
            }
            for(int i=0;i<n;i++){
               if(a[i]==3){
                cout<<i+1<<" ";
                a[i]=0;
                break;
               }
            }
            cout<<endl;
            t--;
        }
    }



    return 0;
}