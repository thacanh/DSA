#include<bits/stdc++.h> //Bai9
using namespace std;
int n, k;
string s;
int vs[10];
vector<string> v1;
vector<string> v2;
void Try(int m)
{
    if(s.size()==n)
    {
        v1.push_back(s);
        return;
    }
    for(char i=0; i<n; ++i)
    {
        if(vs[i]==0)
        {
            s+=('A'+i);
            vs[i]=1;
            Try(i);
            vs[i]=0;
            s.pop_back();   
        }          
    }
}      
void Try2(int m)
{
    if(s.size()==n)
    {
        v2.push_back(s);
        return;
    }
    for(char i=0; i<n; ++i)
    {
        s+=('1'+i);
        Try2(i);
        s.pop_back();          
    }
} 
int main()
{
    cin >> n;
    Try(0);
    Try2(0);
    for(auto i:v1)
    {
        for(auto j:v2) cout << i << j << endl;
    }
}