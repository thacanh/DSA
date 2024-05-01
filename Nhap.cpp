#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string t;
    string res;
    while(ss>>t)
    {
        t[0]=toupper(t[0]);
        for(int i=1; i<t.size(); ++i)
        {
            t[i]=tolower(t[i]);
        }
        res=res+t+' ';
    }
    for(int i=0; i<res.size()-1; ++i) cout << res[i];
}