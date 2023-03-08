#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int p=0;
        cin>>s;
        
        set<char>a;
        for(int i=0;i<s.size();i++)
        {
            a.insert(s[i]);
        }
         p =a.size();
      cout<<p<<endl;
        
     
    }
    return 0;
}