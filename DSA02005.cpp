#include<bits/stdc++.h>
using namespace std;
int vs[11];
void Try(int a[], int m, int n, string s)
{
    if(m>=n) 
    {
        for(int i=0; i<n; ++i) cout << s[a[i]];
        cout << ' ';
        return;
    }
    for(int i=0; i<n; ++i)
    {
        if(vs[i]==0)
        {
            a[m]=i;
            vs[i]=1;
            Try(a, m+1, n, s);
            vs[i]=0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int a[11]={0};
        Try(a, 0, s.size(), s);
        cout << endl;
        for(int i=0; i<11; ++i) vs[i]=0;
    }
}