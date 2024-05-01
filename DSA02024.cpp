#include<bits/stdc++.h>
using namespace std;
int n;
int a[21];
vector<int> x;
vector<string> v;
void Trans()
{
    string tmp;
    for(int i:x)
    {
        tmp+=to_string(i)+' ';    
    }
    v.push_back(tmp);
}
void Try(int j)
{
    for(int i=j; i<=n; ++i)
    {
        if(a[i]>a[j])
        {
            x.push_back(a[i]);
            if(x.size()>1) Trans();
            Try(i);
            x.pop_back();
        }
    }
}
int main()
{
    cin >> n;
    for(int i=1; i<=n; ++i) cin >> a[i];
    Try(0);
    //sort(v.begin(), v.end());
    for(string i:v) cout << i << endl;;
}