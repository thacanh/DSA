#include<bits/stdc++.h>
using namespace std;
int n;
vector<string> v;
void Try(string s, int a, int b, int c)
{
    if(s.size()<=n)
    {
        if(a and b and c and a<=b and b<=c) v.push_back(s);
        if(s.size()==n) return;
    }
    Try(s+'A', a+1, b, c);
    Try(s+'B', a, b+1, c);
    Try(s+'C', a, b, c+1);
}
bool cmp( string a, string b)
{
    if(a.size()==b.size()) return a<b;
    return a.size()<b.size();
}
int main()
{
    cin >> n;
    string s="";
    Try(s, 0 ,0, 0);
    sort(v.begin(), v.end(), cmp);
    for(auto i:v) cout <<i << endl;
}