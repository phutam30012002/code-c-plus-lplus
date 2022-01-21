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
    for(int i=3;i<=17;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    while(t--)
    {
        long long n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++)
        {
            int check =1;
            for(int j=0;j<=17;j++)
            {
                if(a[i]==f[j])
                {
                check=0;    
                }
            }
            if(check==0) cout <<a[i] <<" ";
        }
        cout <<"\n";
    }
}    