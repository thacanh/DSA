#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[101][101];
int cnt=0;
void Try(int i, int j)
{
    if(i==m-1 and j==n-1) 
    {
        ++cnt; 
        return;
    }
    if(i!=m-1) Try(i+1, j);
    if(j!=n-1) Try(i, j+1);
}
int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        cin >> m >> n;
        for(int i=0; i<m; ++i)
        {
            for(int j=0; j<n; ++j) cin >> a[i][j];
        }
        Try(0,0);
        cout << cnt << endl;;
        cnt=0;
    }
}