#include<iostream>
#include<math.h>
using namespace std;
long long nt(long long a )
{
    if(a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
    if(a%i==0) return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while( t--)
    {
        long long n,max;
        cin >> n;
        long long b=n;
        if (nt(n)==1)
        {
            cout << n <<"\n";
            continue;
        }
        for(int i=2;i<= sqrt(b);i++)
        {
            while (nt(i)==1 && n%i==0)
            {
                max=i;
                n/=i;
            }
        }
        if(n>max)  cout << n <<"\n";
        else cout << max <<"\n";
    
    }
    return 0;
}