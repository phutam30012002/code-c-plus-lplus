#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
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
        int b[n*m],x=0,h=0,l=n-1,k=m-1;
        while(x<n*m)
        {
            for(int i=h;i<k;i++) b[x++]=a[h][i];
            for(int i=h;i<l;i++) b[x++]=a[i][k];
            for(int i=k;i>h;i--) b[x++]=a[l][i];
            for(int i=l;i>h;i--) b[x++]=a[i][h];
            h++;l--;k--;
           // if(l==k) b[x]=a[l][k];
        }
        for(int i=0;i<m*n;i++)
        {
            cout << b[i] <<" ";
        }
        cout << endl;
    }
}