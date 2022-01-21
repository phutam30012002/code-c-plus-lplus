#include<bits/stdc++.h>
using namespace std;
int f[100][100] ,a[1000] ,c[1000] ,n ,v;
int qhd()
{
    int i,j;
    for(i=1;i<=n;i++) f[i][0]=0;
    for(i=1;i<=v;i++) f[0][i]=0;
    for(i=1;i<=n;i++) 
    {
        for(j=1;i<=v;j++) 
        {
            if(i==0 || j==0 ) f[i][j]=0;
            else {

            f[i][j]=f[i-1][j];
            if(j> a[i])
            {
                f[i][j]=max(f[i][j],f[i-1][j-a[i]]+c[i]);
            }
            }
        }
    }
    return f[n][v];
}
main()
{
    int t,i;
    cin >>t;
    while(t--)
    {
        cin >> n >>v;
        for(i=1 ;i<=n;i++) cin >> a[i];
        for(i=1;i <=n;i++) cin >> c[i];
        cout << qhd() << endl;
    }
}