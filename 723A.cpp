#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        if(b>c)
        {
            cout<<(a-c)<<endl;
        }

        else{ 
            cout<<(a-b)<<endl;

        }

    }
    else if(b>a && b>c)
    { 
        if(a>c)
        {
            cout<<(b-c)<<endl;
        }
        else{
            cout<<(b-a)<<endl;

        }

    }
    else if(c>a && c>b){
          if(a>b)
          {
            cout<<(c-b)<<endl;

          }
          else{
            cout<<(c-a)<<endl;
            
          }

    }

    return 0;
}