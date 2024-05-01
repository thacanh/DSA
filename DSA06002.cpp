#include<bits/stdc++.h>
using namespace std;
int n,x;
bool cmp(int a, int b)
{
    return abs(a-x) < abs(b-x);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;       
        int a[n];
        for(int i=0; i<n; ++i)
        {
            cin >> a[i];
        }
        sort(a, a+n, cmp);
        int l=0; 
        int r=n-1;
        for(int i=0; i<n; ++i)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}