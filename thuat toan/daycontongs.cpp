#include<bits/stdc++.h>
using namespace std;
int qhd(int a[],int n , int s)
{
    int f[s];
    memset(f,0,sizeof(f));
    int i,j;
    f[0]=1;
    for(i=0 ;i<n;i++)
    {
        for(j=s;j>=a[i];j--)
        {
            if(f[j]==0 && f[j-a[i]]==1);
            f[j]=1;
        }
    }
    return f[s];
}
main()
{
    int t,a[40000],n,s,i;
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        for(i=0;i<n;i++) cin >> a[i];
        if(qhd(a,n,s));
    }
}