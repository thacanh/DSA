#include<bits/stdc++.h>
using namespace std;
int n;
string s[]={"AE", "B", "C", "D", "F", "G", "H"};
string ss[]={"EA", "B", "C", "D", "F", "G", "H"};
string s1="BCDFGH";
int a[11];
int vs[11];
vector<string> v;
void Try(int m, int n)
{
    if(m>=n) 
    {
        if(n>3)
        {
            string tmp;
            for(int i=0; i<n; ++i) tmp += s[a[i]];
            v.push_back(tmp);
            string tmp1;
            for(int i=0; i<n; ++i) tmp1 += ss[a[i]];
            v.push_back(tmp1);
        }
        return;
    } 
    for(int i=0; i<n; ++i)
    {
        if(!vs[i])
        {
            a[m]=i;
            vs[i]=1;
            Try(m+1, n);
            vs[i]=0;
        }
    }
}
void Try2(int m,int n)
{
    if(m>=n) 
    {
        string tmp;
        for(int i=0; i<n; ++i) tmp += s1[a[i]];
        v.push_back(tmp);
        return;
    } 
    for(int i=0; i<n; ++i)
    {
        if(!vs[i])
        {
            a[m]=i;
            vs[i]=1;
            Try2(m+1, n);
            vs[i]=0;
        }
    }
}
int main()
{
    char c;
    cin >> c;
    n=c-'A';  
    if(c>='E') --n;
    Try2(0,n);
    if(c>='E') ++n;
    vector<string> New;
    for(auto &i:v) 
    {
        if(n>3)
        {
            New.push_back('A'+i+'E');
            New.push_back('E'+i+'A');
        }
        else
        {
        New.push_back('A'+i);
        New.push_back(i+'A');
        }
    }
    v.clear();
    Try(0,n);
    for(auto &i:v)
    {
        New.push_back(i);
    }
    sort(New.begin(), New.end());
    for(auto i:New) cout << i << endl;
}