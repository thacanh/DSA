#include<bits/stdc++.h>
using namespace std;
int n,m;
int x[100005], y[100005];
int Bin(int X,int l, int r)
{
    if(l>=r)
    {
        if(y[l]>X) return m-l;
        else return 0;
    }
    int mid=(l+r)/2;
    if(y[mid]>X) return Bin(X, l, mid);
    else return Bin(X, mid+1 , r);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int dp[100005]={0};
        for(int i=0; i<n; ++i)
        {
            cin >> x[i];
        }
        for(int i=0; i<m; ++i) 
        {
            cin >> y[i];
            dp[y[i]]++;
        }
        sort(x,x+n);
        sort(y,y+m);
        int cnt=0;
        for(int i=0; i<n; ++i) 
        {
            if(x[i]!=0)
            {
                if(x[i]==1) cnt+=dp[0];
                else 
                {
                    cnt+=Bin(x[i], 0, m-1);
                    cnt+=(dp[0]+dp[1]);
                    if(x[i]==2) cnt-=(dp[3]+dp[4]);
                    if(x[i]==3) cnt+=dp[2];
                }
            }
            //cout << cnt << endl;
        }
        cout << cnt << endl;
        for(int i=0; i<100005; ++i) 
        {
            x[i]=0;
            y[i]=0;
        }
    }
}