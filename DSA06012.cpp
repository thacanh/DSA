#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        map<int,int> m;
        int a[n];
        for(int i=0; i<n; ++i) 
        {
            cin >> a[i];
            m[a[i]]++;
        }
        int check=0;
        for(auto i:m)
        {
            if(i.first==k)
            {
                cout << i.second;
                ++check;
            }
        }
        if(check==0) cout << -1;
        cout << endl;
    }
    return 0;
}