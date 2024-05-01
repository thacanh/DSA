#include<bits/stdc++.h>
using namespace std;
string t="*ABC";
void HN(int n, int a, int b, int c)
{
    if(n==1)
    {
        cout << t[a] << " -> " << t[c] << endl;
        return;
    }
    HN(n-1, a, c, b);
    HN(1, a, b, c);
    HN(n-1, b, a, c);
}
int main()
{
    int n;
    cin >> n;
    HN(n, 1, 2, 3);
}
