#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p;
    int nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int td=(k*l);  //total td mili drink
    int dt=(td/n); // drinks enough for making dt toast
    int ls=(c*d);// total slice number for making this number of toast
    int sn=(p/np); //salt enough for sn toast
    int m=min(dt,ls);
    int ans=min(m,sn);    

   cout<<(ans/n)<<endl;
    return 0;
}
