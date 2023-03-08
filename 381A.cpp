#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,d=0;
    cin>>n;
    int a[n];
    for(int i=0 ;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,j=n-1;
    while(1){
        if(n%2==0){
            if(i==n || j==n ||(i=n/2 && j==n/2)){
            break;}
        }
        else{
            if(i==n || j==n ){
            break;}

        }
            if(i==0|| i%2==0){
                if(a[i]>a[j])
            {
                s+=a[i]; 
                i++;        
            }
            else{
                s+=a[j];
                j--;
            }

            }
            else{
                if(a[i]>a[j])
            {
                d+=a[i]; 
                i++;         
            }
            else{
                d+=a[j];
                j--;
            }

            }
            
        }
    
    cout<<s<<" "<<d<<endl;




    return 0;
}