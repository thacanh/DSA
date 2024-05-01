#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> x;
void Print()
{
    for(int i=0; i<n; ++i)
    {
        if(x[i]!=x[n-i-1]) return;
    }
    for(int i : x) cout << i << ' ';
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
    cin >> n;
    Try();
}