#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b)
{
    if(!a) return b;
    return gcd(b%a, a);
}
ll bmoda(ll a,string b)
{
    ll mod=0;
    for(int i=0;i<b.size();i++)
    {
        mod=(mod*10+b[i]-'0')%a;
    }
    return mod;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a;
        string b;
        cin >> a >> b;
        ll x=bmoda(a,b);
        ll y=gcd(a,x);
        cout << y <<"\n";
    }
}
