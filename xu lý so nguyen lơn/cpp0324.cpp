#include<bits/stdc++.h>
using namespace std;
long long amodm(string s,long long m)
{
    long long ans=0;
    for(int i=0;i<s.size();i++)
    {
        ans=( ans*10 + (s[i]-'0'));
        ans %= m;
    }
    return ans;
}
long long apowbmodm(string &s,long long b,long long m)
{
    long long a=amodm(s,m);
    long long ans=a;
    long long res=1;
    while (b > 0)
    {
        // If y is odd, multiply
        // x with the result
        //if ((b & 1) > 0)
        if(b%2==1 &&b >0)
            res = (res * a) % m;
 
        // y must be even now
        b = b >> 1; // y = y/2
        a = (a * a) % m;
    }
    return res;
    
}
int main()
{
    int t;
    cin>> t;
    cin.ignore();
    while(t--)
    {
        string a;
        long long b,m;
        cin >> a;
        cin >> b>>m;
        cout << apowbmodm(a,b,m)<<"\n";
    }
}
