#include<bits/stdc++.h>
using namespace std;
vector<int> x;
void in()
{
    for(auto i : x) cout << i;
    for(int i=x.size()-1; i>=0; --i) cout << x[i];
    cout <<' ';
}
void SinhBin(int n)
{
    if(x.size()==n)
    {
        in();
        return;
    }
    for(int i=0; i<=1; ++i)
    {
        x.push_back(i);
        SinhBin(n);
        x.pop_back();
    }
}
int main ()
{   
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=2; i<=n; i+=2)
        {
            SinhBin(i/2);
        }
        cout << endl;
    }
}	    
