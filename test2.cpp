#include<bits/stdc++.h>
using namespace std;
vector<int> x;
int a[2]={6,8};
int n;
void Solve()
{
    for(int i:x) cout << a[i];
    cout << ' ';
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
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a, a+n);
    int cnt=0;
    for(int i=1; i<n; ++i)
    {
        if(a[i]-a[i-1]>k) ++cnt;
    } 
    cout << cnt;
}