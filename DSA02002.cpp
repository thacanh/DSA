#include<bits/stdc++.h>
using namespace std;
int n;
int a[15];
int tmp[15];
int x[11][11];
int cnt=0;
void Try(int m)
{
    if(m==0) return;
    for(int i=0; i<m; ++i) 
    {
        x[cnt][i]=a[i];
    }
    ++cnt;
    for(int i=0; i<m-1; ++i) tmp[i]=a[i]+a[i+1];
    for(int i=0; i<m-1; ++i) a[i]=tmp[i];
    Try(m-1);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            cin >> a[i];
        }
        Try(n);
        for(int i=n-1; i>=0; --i)
        {
            cout << '[';
            for(int j=0; j<=n-1-i; ++j)
            {
                cout << x[i][j];
                if(j!=n-1-i) cout << ' ';
                else cout << ']';
            }
            cout << ' ';
        }
        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<n; ++j) x[i][j]=0;
        }
        cnt=0;
        cout << endl;
    }
}

