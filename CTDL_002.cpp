#include<bits/stdc++.h>
using namespace std;
int n, s;
vector<int> a,x;
int cnt=0;
void Solve()
{
    int sum=0;
    for(int i=0; i<n; ++i) 
    {
        if(x[i]==1) sum+=a[i];
        //cout << i;
    }
    if(sum==s)
    {
        for(int i=0; i<n; ++i) 
        {
            if(x[i]==1) cout << a[i] << ' ';
        }
        cout << endl;
        ++cnt;
    }
}
void Try()
{
    if(x.size()==n) 
    {
        Solve();
        return;
    }
    for(int i=0; i<=1; ++i)
    {
        x.push_back(i);
        Try();
        x.pop_back();
    }
}
int main()
{
    cin >> n >> s;
    for(int i=0; i<n; ++i)
    {
        int k;
        cin >> k; 
        a.push_back(k);
    }
    Try();
    cout << cnt;
}