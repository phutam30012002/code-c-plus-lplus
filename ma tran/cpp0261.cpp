#include<bits/stdc++.h>
using namespace std;
void input(int a[100][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
}
void test(int a[100][100],int b[100][100],int n,int m)
{
    int i=0,j=0,x=0;
    while(i<n)
    {
        for( int k=0;k<m;k++)
        {
           if(x==1) j=0;
            while(j<n)
            {
                for(int l=0;l<m;l++)
                {
                    a[i][j]*=b[k][l];
                    j++;
                }
            }
            if(j==n) i++;
            x=1;
        }
      
    }
}
void output(int a[100][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n,m;
    cin >> n ;
    int a[100][100],b[100][100];
    input(a,n);
    cin >> m;
    input(b,m);
    test(a,b,n,m);
    output(a,n);

}
/*for(int i=0,k=0;i<n,k<m;i++,k++)
    {
        for(int j=0,l=0;j<n,l<m;j++,l++)
        {
            a[i][j]*=b[k][l];
            //if(l==m-1) l=0;
        }
       // if(k==m-1) k=0;
       // if(i==n-1) break;
    }*/