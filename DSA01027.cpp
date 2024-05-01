#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int t;
    // cin >> t;
    // while(t--)
    // {
        int n;
        cin >> n;
        int a[n+1];
        int s[n+1];
        for(int i=1; i<=n; ++i)
        {
            a[i]=i;
            cin >> s[i];
        }
        sort(s+1, s+n+1);
        while(1)
        {
            for(int i=1; i<=n; ++i) cout << s[a[i]] << ' ';
            cout << endl;
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
    //     cout << endl;
    // }
}