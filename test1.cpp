#include<bits/stdc++.h>
#define For(i, a, b) for(int i = a; i < b; ++i)
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define ll long long
#define endl '\n'

using namespace std;

ll F[1000005];

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	int mod = 1e9 + 7;
	F[1] = 1;
	F[2] = 1;
	FOR(i, 3, 1000000)
		F[i] = (F[i-2] + F[i-1]) % mod;
	while(t--)
	{
		int n;
		cin >> n;
		cout << F[n] << endl;
	}
}