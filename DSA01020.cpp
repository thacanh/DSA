#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n=s.size();
        int i=s.size()-1;
        while(i>0 and s[i]=='0')
        {
            s[i]='1';
            --i;
        }
        if(i==0) while(n--) cout << '1';
        else 
        {
            s[i]='0';
            cout << s;
        }
        cout << endl;
    }
}