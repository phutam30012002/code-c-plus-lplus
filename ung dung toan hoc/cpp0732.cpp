#include<bits/stdc++.h>
using namespace std;
int maxsum(int a[],int n)
{
    int max=0;
    int ms[n];
    for(int i=0;i<n;i++) ms[i]=a[i];
    for(int i= 0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i] > a[j]&& ms[i]<ms[j]+a[i])
            ms[i]=ms[j]+a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(max<ms[i]) max=ms[i];
    }
    return max;
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
        cout <<  maxsum(a,n) <<"\n";
    }
}