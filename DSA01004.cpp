#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> x;
int f[1000];
void Solve()
{
    for(int i:x) cout << i;
    cout << ' ';
}
void Try(int m)
{
    if(x.size()==k) 
    {
        Solve();
        return;
    }
    for(int i=m; i<=n; ++i)
    {
        if(f[i]==0)
        {
            x.push_back(i);
            f[i]=1;
        }
        
        Try(i+1);
        f[x.back()]=0;
        x.pop_back();
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Try(1);
        x.clear();
        for(int i=0; i<=n; ++i) f[i]=0;
        cout << endl;
    }
}