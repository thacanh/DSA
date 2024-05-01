#include<bits/stdc++.h>
using namespace std;
int n;
int a[11][11];
char w[2]={'D','R'};
vector<string> ss;
string s;
void Try(int i, int j)
{
    if(i==n-1 and j==n-1) 
    {
        ss.push_back(s);
        return;
    }
    if(a[i+1][j]==1)
    {
        s+=w[0];
        Try(i+1, j);
        s.pop_back();
    }
    if(a[i][j+1]==1)
    {
        s+=w[1];
        Try(i, j+1);
        s.pop_back();
    }
    if(a[i+1][j]==0 and a[i][j+1]==0 )
    {
        return;
    }
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
            for(int j=0; j<n; ++j) cin >> a[i][j];
        }
        Try(0,0);
        if(ss.size()==0 or a[0][0]==0) cout << -1;
        else
        {
            sort(ss.begin(), ss.end());
            for(string i:ss) cout << i << ' ';
        }
        cout << endl;
        s.clear();
        ss.clear();
    }
}