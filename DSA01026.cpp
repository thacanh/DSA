#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> x;
int s[2]={6, 8};
void Print()
{
    if(x[0]!=1 or x[n-1]!=0) return;
    for(int i=0; i<n-1; ++i)
    {
        if(x[i]==x[i+1] and x[i]==1) return;
    }
    for(int i=0; i<n-3; ++i)
    {
        if(x[i]==0 and x[i+1]==0 and x[i+2]==0 and x[i+3]==0) return;
    }
    for(int i : x) cout << s[i];
    cout << endl;
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
        cin >> n;
        Try();
        x.clear();
    // } 
}