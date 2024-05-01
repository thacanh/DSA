#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        set<int> se;
        for(int i=0; i<s.size(); ++i)
        {
            int tmp=s[i]-'0';
            if(tmp >=0 and tmp <= 9) se.insert(tmp);
        }
        for(auto i:se) cout << i << ' ';
        cout << endl;
    }

}