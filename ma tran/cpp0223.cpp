#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin  >> n >> m;
        int a[n][m],b[n*m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> a[i][j];
            }
        }
        int x=0,y=m-1,z=0,k=n-1;
        while(z<n*m)
        {
            for(int i=x;i<y;i++)
            {
                b[z++]=a[x][i];

            }
            for(int i=x;i<k;i++)
            {
                b[z++]=a[i][y];
            }
            for(int i=y;i>x;i--)
            {
                b[z++]=a[k][i];
            }
            for(int i=k;i>x;i--)
            {
                b[z++]=a[i][x];
            }
            x++;y--;k--;

        }
        for(int i=0;i<m*n;i++) cout <<b[i]<<" ";
        cout <<"\n";
        
    }
}