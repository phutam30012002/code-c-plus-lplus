#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,l,r;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        cin >> l >> r;
        int check=0;
        for(int i=l;i<r/2;i++)
        {
            if(a[i]>a[i+1])
            {
                check=1;
                break;
            }
        }
        for(int i=r/2;i<=r;i++)
        {
            if(a[i]<a[i+1])
            {
                check=1;
                break;
            }
        }
        if(check==0) cout << "Yes\n";
        else cout <<"No\n";
    }
}