#include <bits/stdc++.h>
using namespace std;
struct data{
	int giatri;
	int triso;
	int sosanh;
};
bool cmp(data a,data b){
	if(a.sosanh != b.sosanh) return a.sosanh < b.sosanh;
	return a.triso > b.triso;
}

int main() {
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
	int n, k; cin >> n >> k;
	vector <data> so(n);
	for(int i = 0; i < n; i++){
		cin >> so[i].giatri;
		so[i].sosanh = abs(so[i].giatri - k);
		so[i].triso = i;
	}
	sort(so.begin(), so.end(), cmp);
	for(int i = 0; i < n; i++){
		cout << so[i].giatri << " ";
	}
    return 0;
}