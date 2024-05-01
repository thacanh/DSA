#include<bits/stdc++.h>
using namespace std;
int n, k;
void Sinh()
{
    int a[k];
    for(int i=0; i<k; ++i) a[i]=1;
    int check=0;
    while(check==0)
    {
        for(int i=0; i<k; ++i) cout << a[i] << ' ';
        cout << endl;
        int i=k-1;
        while(i>=0 and a[i]==n) --i;
        if(i>=0 and a[i]<n)
        {
            ++a[i];
            for(int j=i+1; j<=k; ++j) a[j]=a[i];
        }
        else check=1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    Sinh();
}