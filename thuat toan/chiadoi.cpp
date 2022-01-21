#include <bits/stdc++.h>
using namespace std;
int c[65][65] ;
main()
{
    int i,j;
    for(i=0;i<=60;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i ) c[i][j]=1;
            else  c[i][j]=(c[i-1][j-1]+c[i-1][j]) ;
        }
    }
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n ;
        cout << c[n*2][n]/(n+1) << endl;
    }
}