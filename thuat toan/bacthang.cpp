#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
main()
{
    int t,n,k,i,j;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int f[n+1]={0};
        f[0]=1;f[1]=1;
        for(i=2;i<=n;i++)
        {
            for(j=1;j <=min(i,k);j++)
            {
                f[i]=f[i]+f[i-j];
                f[i]=f[i]%mod;
            }
        }
        cout << f[n] << endl;
    }
}