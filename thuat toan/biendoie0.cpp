#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long k;
        cin >> k;
        long long n;
        if(k!=0) n=9;
        else  n=0;
        for(int i=2;i<=k;i++)
        {
            int a=n,x=0;
            while(a>1)
            {
                a/=10;
                x=a;
            }
            n+=x;
        }
        cout << n << endl;
    }
}