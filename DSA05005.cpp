#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[1005]={};
        int dp[1005]={0};
        for(int i=0; i<n; ++i)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; ++i)
        {
            dp[i] = 1;
            for(int j=0; j<i; ++j)
            {
                if(a[j]<a[i]) 
                {
                    dp[i]=max(dp[i], dp[j]+1);
                }
            }
        }
        cout << n-*max_element(dp,dp+n);
    }
}