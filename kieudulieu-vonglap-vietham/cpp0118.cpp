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
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int b=n;
        int dem=0;
        int a[1000],j=0,check=1;
        for(int i=2;i<=sqrt(b);i++)
        {
            while(n%i==0)
            {
                a[j++]=i;
                n/=i;
            }
        }
        if(n>1) a[j++]=n;
        if(j!=3)
        {
            cout <<"0\n";
            continue;
        }else
        {
            
            for(int i=0;i<j;i++)
            {
                for(int k=i+1;k<j;k++)
                {
                    if(a[i]==a[k])
                    {
                        check=0;
                        cout <<"0\n";
                        break;
                    }
                }
            }
        }
        if(check==1) cout <<"1\n";
    }
}