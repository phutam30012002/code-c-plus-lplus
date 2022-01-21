#include<bits/stdc++.h>
using namespace std;
int kt(int a[],int n,int r)
{
    int m=a[n];
    for(int i=n;i<=r;i++)
    {
        if(a[i]>m) m=a[i];
    }
    int t;
    for(int i=n;i<=r;i++)
    {
        if(a[i]==m) 
        {
            t=i;
            break;
        }
    }
    
    for(int i=n;i<t-1;i++)
    {
        if(a[i]>a[i+1]) 
        {
            return 0;
            break;
        }
    }
    for(int i=t;i<r;i++)
    {
        if(a[i]<a[i+1]) 
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int l,r;
        cin >> l >> r;
        if(kt(a,l,r)==1) cout <<"Yes\n";
        else cout <<"No\n";
    }
}