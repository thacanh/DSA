#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t; 
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n+1];
        string s;
        vector<string> ss;
        for(int i=1; i<=k; ++i)
        {
            int x; 
            cin >> x;
            s+=(x+'0');
            a[i]=i;
        }
        while(1)
        {
            string tmp;
            for(int i=1; i<=k ; ++i) tmp+=(a[i]+'0');
            ss.push_back(tmp);
            int i=k;
            while(i and a[i]>=n-k+i) --i;
            if(i==0) 
            {
                break;
            }
            a[i]=a[i]+1;
            for(int j=i+1; j<=k; ++j)
            {
                a[j]=a[i]+j-i;
            }
        }
        for(int i=0; i<ss.size(); ++i)
        {
            if(s==ss[i])
            {
                cout << i + 1<< endl;
                break;
            }
        }
    }
}