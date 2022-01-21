#include<bits/stdc++.h>
using namespace std;
int len(int a[],int n,int x)
{
    int sum=0,min_len=n+1;
    int strat=0,end=0;
    while(end<n)
    {
        while(sum <= x && end < n)
        {
            sum+=a[end++];
        }
        while(sum > x && strat <n)
        {
            if(end-strat < min_len ) min_len=end-strat;
            sum-=a[strat++];
        }
    }
    return min_len;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin>> n >> x ;
        int a[n ];
        for(int i=0;i<n;i++) cin >> a[i];
        int l=len(a,n,x);
        (l==n+1) ? cout <<"-1\n" : cout << l <<"\n";
    }
}