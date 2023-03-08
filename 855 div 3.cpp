#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string f;
        set<string>a;
        a.insert(s);
        
        for (auto itr = a.begin(); itr != a.end(); itr++) {
        cout << *itr << " ";
    }

    }
    return 0;
}