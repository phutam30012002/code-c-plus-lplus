#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        if(c!=0)
        {
        long long x=a%c;
        long long y=b%c;
        long long z=(x*y)%c;
        cout << z <<"\n";
        }
    }
}