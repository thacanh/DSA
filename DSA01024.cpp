#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    set<string> s;
    for(int i=0; i<n; ++i)
    {
        string x;
        cin >> x;
        s.insert(x);
    }
    vector<string> v;
    for(auto i:s) 
    {
        v.push_back(i);
    }
    int f=v.size();
    int a[f+1];
    for(int i=1; i<=k; ++i) a[i]=i;
    while(1)
    {
        for(int i=1; i<=k; ++i) cout << v[a[i]-1] << ' ';
        cout << endl;
        int i=k;
        while(i and a[i]>=f-k+i) --i;
        if(i==0) break;
        a[i]=a[i]+1;
        for(int j=i+1; j<=k; ++j)
        {
            a[j]=a[i]+j-i;
        }
    }
}   