#include<bits/stdc++.h> ///Bai 7
using namespace std;
int n;
vector<int> x;
vector<string> s;
set<string> ans;
void In()
{
    string tmp;
    for(int i=0; i<n; ++i)
    {
        if(x[i]==1) tmp+=s[i];
    }
    ans.insert(tmp);
}
void Try()
{
    if(x.size()==n) 
    {
        In();                        
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
    cin.ignore();
    int m=n;
    while(m--)
    {
        string x;
        cin >> x;
        s.push_back(x);
    }
    Try();
    for(auto i:ans) cout << i << endl;
}