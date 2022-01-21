#include<bits/stdc++.h>
using namespace std;
int a[100];
void xuat(int a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        cout << a[i];
    }
    cout <<" ";
    
}
void cauhinh( int x,int n)
{
    for(int i=0;i<=1;i++)
    {
        a[x]=i;
        if(x==n) xuat(a,n);
        else cauhinh(x+1,n);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cauhinh(1,n);
        cout << "\n";
    }
}