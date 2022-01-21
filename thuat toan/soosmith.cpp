#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,m;
        cin >> n;
        m=n;
        int tong =0;
        while(m>0)
        {
            tong+= m%10;
            m/=10;
        }
        int dem=0,i=2;;
        while(n>0)
        {
            while(n%i==0)
            {
                dem+=i;
                n=n/i;
            }
            i++;
        }
        if( tong == dem) cout << "YES\n";
        else cout << "NO\n";
    }
}