#include<iostream>
#include<math.h>
using namespace std;
int nt(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0) return 0;
    return 1;
}
int sum(int m)
{
    int tong=0;
    while(m>0)
    {
        tong+=m%10;
        m/=10;
    }
    return tong;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int b=n;
        int a[1000],j=0;
        if(nt(n)==1) 
        {
            cout << "NO\n";
            continue;
        }
        else 
        {
            for(int i=2;i<=sqrt(b);i++)
            {
                 while(n%i==0)
                 {
                     a[j++]=i;
                     n/=i;
                 }
            }
            if(n>1) a[j++]=n;
        }
        int tong1=0;
        for(int i=0;i<j;i++)
        {
             tong1+=sum(a[i]);
        }
        int tong2=sum(b);
        if(tong1==tong2) cout<< "YES\n";
        else cout <<"NO\n";
    }
}