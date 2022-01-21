#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n],b[n*n+1],x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
            b[x++]=a[i][j];
            
        }
    }
    sort(b,b+n*n);
  //  for(int i=0;i<n*n;i++) cout << b[i] << " ";
   int k=0,c=0,d=n-1;
    while(k<n*n)
    {
        for(int i=c;i<d && k<n*n ;i++)
        {
             a[c][i]=b[k++];
          
        }
        for(int i=c;i<d && k<n*n;i++) 
        {
            a[i][d]=b[k++];
          
        }
        for(int i=d;i>c&& k<n*n ;i--) 
        {
            a[d][i]=b[k++];

        }
        for(int i=d;i>c && k<n*n;i--) 
        {
            a[i][c]=b[k++];
            
        }
        c++;d--;
        if(c==d) 
        {
            a[c][d]=b[k++];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            cout << a[i][j] <<" ";
        }
        cout << "\n";
    }
}