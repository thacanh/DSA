#include<bits/stdc++.h>
using namespace std;
vector<int> x;
void Solve(int k)
{
    if(k==1) cout << "02/02/2" ;
    if(k==2) cout << "20/02/2" ;
    if(k==3) cout << "22/02/2" ;
    for(int &i:x)
    {
        if(i==1) i=2;
        cout << i;
    }
    cout << endl;
}
void Try(int k)
{
    for(int i=0; i<=1; ++i)
    {
        x.push_back(i);
        if(x.size()==3) 
        {
            Solve(k);
        }
        else Try(k);
        x.pop_back();
    }
}
int main()
{
    Try(1); Try(2); Try(3);
}