#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >>n >> m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];  
        }
        for(int j=0;j<m;j++)
        {
            cin >> b[j];
        }
        sort(a,a+n);// xx tang dan
        sort(b,b+m);
        cout << (long long)a[n-1]*b[0] <<"\n";
        
    }
}