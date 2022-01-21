#include<bits/stdc++.h>
using namespace std;
int a[100];
void input(int a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        cout << a[i];
    }
    cout <<" ";
}
void hoanvi(int n,int k,int x,int j)
{
    for(int i=a[j-1]+1;i<=n-k+j;i++)
    {
        a[x]=i;
        if(x==k) input(a,k);
        else hoanvi(n,k,x+1,j+1);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        hoanvi(n,k,1,1);
        cout<< "\n";
    }
}