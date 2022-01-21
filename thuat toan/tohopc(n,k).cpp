#include <bits/stdc++.h>
using namespace std;
int c[1000][1000] ,mod=1e9+7;
main()
{
    int i,j;
    for(i=0;i<=1000;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i ) c[i][j]=1;
            else  c[i][j]=(c[i-1][j-1]+c[i-1][j]) %mod;
        }
    }
    int t, n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << c[n][k] << endl;
    }
}