#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        int a[n][m],b[n*m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> a[i][j];
            }
        }
        int x=0,z=0,h=n-1,c=m-1;
        while(x<n*m) 
        {
            for(int i=z;i<c;i++) b[x++]=a[z][i];
            for(int i=z;i<h;i++) b[x++]=a[i][c];
            for(int i=c;i>z;i--) b[x++]=a[h][i];
            for(int i=h;i>z;i--) b[x++]=a[i][z];
            z++;c--;h--;
        }
        cout << b[k-1] <<"\n";
   }
}