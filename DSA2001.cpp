#include<bits/stdc++.h>
using namespace std;
int n;
int a[15];
int tmp[15];
void Try(int m)
{
    if(m==0) return;
    cout << '[';
    for(int i=0; i<m; ++i) 
    {
        cout << a[i];
        if(i!=m-1) cout << ' ';
    }
    cout << ']' << endl;
    for(int i=0; i<m-1; ++i) tmp[i]=a[i]+a[i+1];
    for(int i=0; i<m-1; ++i) a[i]=tmp[i];
    Try(m-1);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            cin >> a[i];
        }
        Try(n);
    }
}

