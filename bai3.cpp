#include<bits/stdc++.h>/// Bai3
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> s;
    cin.ignore();
    int m=n;
    while(m--)
    {
        string x;
        cin >> x;
        s.push_back(x);
    }
    sort(s.begin(), s.end());
    string t;
    cin >> t;
    s.push_back(t);
    int a[n+1];
    for(int i=1; i<=n; ++i)                          
    {
        a[i]=i;
    }
    while(1)
    {
        if(s[a[n]-1]==s.back())
        {
            for(int i=1; i<=n; ++i) cout << s[a[i]-1] << ' ';
            cout << endl;
        }
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
}