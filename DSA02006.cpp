#include<bits/stdc++.h>
using namespace std;
int n, k;
vector<int> x;
int a[11];
int check;
void Solve()
{
    int sum=0;
    int tmp;
    for(int i=0; i<n; ++i) 
    {
        if(x[i]==1)
        {
            sum+=a[i];
            tmp=i;
        }
        //cout << x[i];
    }
    //cout << endl;
    if(sum==k)
    {
        ++check;
        cout << '[';
        for(int i=0; i<n; ++i)
        {
            if(x[i]==1) 
            {
                cout << a[i];
                if(i!=tmp) cout << ' ';
            }
        }
        cout << ']' << ' ';
    }
}
void Try()
{
    for(int i=1; i>=0; --i)
    {
        x.push_back(i);
        if(x.size()==n) 
        {
            Solve();
        }
        else Try();
        x.pop_back();
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i=0; i<n; ++i) cin >> a[i];
        sort(a, a+n);
        Try();
        x.clear();
        for(int i=0; i<11; ++i) a[i]=0;
        if(check==0) cout << -1;
        cout << endl;
        check=0;
    }
}