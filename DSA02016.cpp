#include<bits/stdc++.h>
using namespace std;
int n;
int cot[211];
int cheo1[21];
int cheo2[21];
int cnt=0;
void Try(int i)
{
    for(int j=0; j<n; ++j)
    {
        if(cot[j]==0 and cheo1[j-i+n]==0 and cheo2[j+i]==0)
        {
            cot[j]=1;
            cheo1[j-i+n]=1;  
            cheo2[j+i]=1;
            if(i==n-1) ++cnt;
            else Try(i+1); 
            cot[j]=0;
            cheo1[j-i+n]=0;  
            cheo2[j+i]=0;
        }
    }
}
int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        cin >> n;
        Try(0);
        cout << cnt << endl;
        cnt=0;
        for(int i=0; i<=20; ++i) 
        {
            cot[i]=0;
            cheo1[i]=0;
            cheo2[i]=0;
        }
    }
}