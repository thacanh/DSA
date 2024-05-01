#include <bits/stdc++.h>
using namespace std;
int main(){
		string s1;
		string s2;
		getline(cin, s1);
		getline(cin, s2);
		stringstream ss(s1);
		string s;
		while(getline(ss, s, '.'))
		{
			cout << s << ' ';
		}
}