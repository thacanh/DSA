#include<bits/stdc++.h>
using namespace std;
string s;
void Solve()
{
    int n=s.size();
    int a[n];
    int gt=1;
    for(int i=0; i<n; ++i) 
    {
        a[i]=(s[i]-'0');
        gt*=(i+1);
    }
    sort(a,a+n);
    while(gt--)
    {
        if(a[0]) cout << a[0];
        for(int i=1; i<n; ++i) cout << a[i];
        cout << endl;
        next_permutation(a, a+n); 
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--) 
    {
        cin >> s;
        Solve();
    }
}