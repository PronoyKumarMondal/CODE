#include<iostream>
#include<string>
using namespace std;
int main()
{   int u=0,l=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
           u++;
        }
        
        else
        {
           l++;
        }
    }
    if(u<=l)
    {
        for(int i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
    }
    }
    else 
    {
        for(int i=0;i<s.length();i++)
    {
       s[i]=toupper(s[i]);
    }
    }
   
cout<<s;

    return 0;
}