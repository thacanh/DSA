#include<bits/stdc++.h>
using namespace std;
int n, s;
int a[35];
int ans=1e9;
void Try(int m, int s, int cnt)
{
    if(s==0)
    {
        ans=min(ans, cnt);
        return;
    }
    if(s<0 or cnt > ans ) return;
    for(int i=m; i<n; ++i)
    {
        Try(i+1,s-a[i], cnt+1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s;
    for(int i=0; i<n; ++i) cin >> a[i];
    //sort(a, a+n);
    Try(0, s, 0);
    cout << ans;
}