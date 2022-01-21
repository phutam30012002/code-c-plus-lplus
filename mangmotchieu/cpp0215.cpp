#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
    for(int i=0;i<n;i++) cin >> a[i];
}
int  check(int a[],int b[],int n,int m)
{
    int sum=0,t=0;
    for(int i=0;i<n;i++)
    {
        t+=a[i];
        int k=0;
        for(int j=i+1;j<m;j++)
        {
            k+=b[j];
        }
        if(t+k > sum) sum=t+k;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        nhap(a,n);
        nhap(b,m);
        int max=check(a,b,n,m);
        int max2=check(b,a,m,n);
        if(max<max2) max=max2;
        cout << max << endl;
    } 
}