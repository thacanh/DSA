#include<bits/stdc++.h>
using namespace std;
string s[363000];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n+1];
        string t;
        for(int i=1; i<=n; ++i)
        {
            int x;
            cin >> x;
            t+=('0'+x);
        }
        for(int i=1; i<=n; ++i)                          
        {
            a[i]=i;
        }
        int cnt=1;
        while(1)
        {
            for(int i=1; i<=n; ++i) s[cnt]+=('0'+a[i]);
            ++cnt;
            int i=n-1;
            while(i and a[i]>a[i+1]) --i;
            if(i==0) break;
            int k=n;
            while(a[k]<a[i]) k--;
            swap(a[i], a[k]);
            int l=i+1; 
            int r=n;
            while(l<r)
            {
                swap(a[l], a[r]);
                l++; r--;
            }
        }
        //cout << t;
        for(int i=1; i<=cnt; ++i)
        {
            if(t==s[i]) 
            {
                cout << i;
            }
            s[i].clear();
        }
        cout << endl;
    }
}