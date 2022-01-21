#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >>m;
        int a[n],b[m],c[n*m],k=0;
        for(int i=0,j=0;i<n,j<m;i++,j++)
        {
            cin >> a[i];c[k++] =a[i];
            cin >> b[j];c[k++]=b[j];
        }
        sort(c,c+k);
        for(int i=0;i<k;i++)
         cout <<c[i] <<" ";
         cout <<"\n";
    }
}