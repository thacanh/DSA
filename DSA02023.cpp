#include<bits/stdc++.h>
using namespace std;
int n,k;
int vs[31];
vector<int> x;
vector<string> s;
void Solve()
{
    for(int i:x) cout << s[i] << ' ';
    cout << endl;
}
void Try(int m)
{
    for(int i=m; i<n; ++i)
    {
        if(!vs[i])
        {
            x.push_back(i);
            vs[i]=1;
        }
        if(x.size()==k) Solve();
        else Try(i+1);
        vs[x.back()]=0;
        x.pop_back();
    }
}
int main()
{
    int t;
    cin >> t >> k;
    set<string> se;
    while(t--)
    {
        string a;
        cin >> a;
        se.insert(a);
    }
    for(auto i:se) s.push_back(i);
    n=s.size();
    //cout << n;
    Try(0);
}