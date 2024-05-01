#include<bits/stdc++.h>
using namespace std;
int nt[1000005];
int main()
{
    int t;
    cin >> t;
    for(int i=2; i<=1000000; ++i) nt[i]=1;
    for(int i=2; i<=1000; ++i)
    {
        if(nt[i])
        {
            for(int j=i*i; j<=1000000; j+=i)
            {
                nt[j]=0;
            }
        }
    }
    while(t--)
    {
        int n;
        cin >> n;
        int check=0;
        for(int i = 2; i <= n/2; ++i) 
        {
            if(nt[i] and nt[n - i])
            {
                cout << i << ' ' << n-i;
                ++check;
                break;
            }
        }
        if(check==0) cout << -1;
        cout << endl;
    }
}