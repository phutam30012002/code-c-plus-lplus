#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i]=1;
        }
        int dem =0;
        for(int i=0;i<n;i++)
        {
           if(a[i]==x) dem++;
        }
        if(dem !=0) cout <<dem <<"\n";
        if(dem ==0) cout <<"-1\n";
    }
}