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
        int a[n];
        long long tong=0,m=1e9+7;
        for(int i=n-1;i>=0;i--) 
        {
            cin >> a[i];
            long long k=i;
            long long tong1 =0;
            tong1+=a[i]%m;
            while(k--)
            {
                tong1 =( tong1*x)%m;
            }
            tong1 %=m;
            tong +=tong1;

        }
        cout << tong %m <<"\n";
    }
}