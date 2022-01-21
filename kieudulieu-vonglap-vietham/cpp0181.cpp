#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        int a,x,y;
        cin >> a >>x >> y;
        int z=gcd(x,y);
        for(int i=1;i<=z;i++)
        {
            cout<< a;
        }
        cout <<"\n";
    }
}