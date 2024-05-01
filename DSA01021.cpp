#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t; 
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n+1];
        int tmp[n+1];
        for(int i=1; i<=k; ++i)
        {
            cin >> tmp[i];
            a[i]=tmp[i];
        }
        int i=k;
        while(i and a[i]>=n-k+i) --i;
        if(i==0) 
        {
            cout << k << endl;
        }
        else
        {
            a[i]=a[i]+1;
            for(int j=i+1; j<=k; ++j)
            {
                a[j]=a[i]+j-i;
            }
            int cnt=0;
            for(int i = 1; i <= k; i++)
            {
                    for(int j = 1; j <= k; j++)
                        if(a[i] == tmp[j]) ++cnt;
            } 
            cout << k-cnt << endl;
        }
    }
}