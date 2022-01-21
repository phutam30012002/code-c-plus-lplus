#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long f[10000];
    f[0]=0;
    f[1]=f[2]=1;
    for(int i=3;i<=92;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    while(t--)
    {
        int n;
        cin >>n;
        cout <<f[n]<<"\n";

    }
}