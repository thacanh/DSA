#include<bits/stdc++.h>
using namespace std;
int t[1000005];
int main()
{
    int n,x;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
        t[a[i]]++;
    }
    for(int i=0; i<n; ++i)
    {
        if(t[a[i]])
        {
            cout << a[i] << ' ';
            t[a[i]]=0;
        }
    }
}