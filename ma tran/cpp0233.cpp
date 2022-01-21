#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> a[i][j];
            }
        }
        int b[n*m];
        int x=0,z=0,k=m-1,h=n-1;
        while(x<n*m)
        {
            for(int i=z;i<k;i++) b[x++]=a[z][i];
            for(int i=z;i<h;i++) b[x++]=a[i][k];
            for(int i=k;i>z;i--) b[x++]=a[h][i];
            for(int i=h;i>z;i--) b[x++]=a[i][z];
            z++;k--;h--;

        }
        for(int i=n*m-1;i>=0;i--) 
        {
            cout << b[i] <<" ";
        }
        cout <<"\n";
    }
}