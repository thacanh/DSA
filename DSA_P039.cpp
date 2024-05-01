#include<bits/stdc++.h>
using namespace std;
int dp[1050000];
int n;
int a[21][21]={0};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<n; ++j) 
            {
                cin >> a[i][j];
            }
        }
        for(int i=1; i<(1<<n); ++i)
        {
            int res=0;
            int cnt=0;
            for(int j=0; j<n; ++j)
            {
                if(((i>>j)&1)==1)
                {
                    ++cnt;
                }
            }
            for(int j=0; j<n; ++j)
            {
                if(((i>>j)&1)==1)
                {
                    int p=(1<<j)^i;
                    res=max(res, dp[p]+a[cnt-1][j]);
                }
            }
            dp[i]=res;
            //cout << dp[i] << ' ';
        }
        cout << dp[(1<<n)-1] << endl;
    }
}