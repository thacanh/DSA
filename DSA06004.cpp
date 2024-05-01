#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        map<int,int> m;
        int x;
        for(int i=0; i<n; ++i) 
        {
            cin >> x;
            m[x]++;
        }
        for(int i=0; i<k; ++i) 
        {
            cin >> x;
            m[x]++;
        }
        for(auto i:m) cout << i.first << ' ';
        cout << endl;
        for(auto i:m) if(i.second>1) cout << i.first << ' ';
        cout << endl;
    }
}