#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> x;
char s[2]={'A', 'B'};
void Print()
{
    // if(x[0]!=1 or x[n-1]!=0) return;
    int cnt=0;
    for(int i=0; i<n; ++i)
    {
        if(x[i]==1) ++cnt;
    }
    if(cnt%2==0) 
    {
        for(int i : x) cout << i;
        cout << endl;
    }
}
void Try()
{
    if(x.size()==n)
    {
        Print();
        return;
    } 
    for(int i=0; i<=1; ++i)
    {
        
        x.push_back(i);
        Try();
        x.pop_back();
    }
}
int main()
{
    // int t;
    // cin >> t;
    // while(t--)
    // {
        // cin >> n >> k;
        cin >> n;
        Try();
        x.clear();
    // } 
}