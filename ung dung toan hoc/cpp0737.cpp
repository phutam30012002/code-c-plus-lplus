#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        long long a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        long long  max1=-100000;
        int x;
        for(int i=0;i<n;i++)
        {
            long long sum=a[i];
            if(i<=n-k)
            {
            for(int j=i+1;j<i+k ;j++)
            {
                sum+=a[j];
            }
            }else break;
            if(sum > max1) {max1 = sum;x=i;}       
         }
         for(int i=x;i<x+k;i++) cout << a[i] <<" ";
         cout << "\n";
    }
}
/*#include<bits/stdc++.h>
using namespace std;
int findmax(int a[],int n,int k)
{
    long long  sum=a[0];
    for(int i=1;i<k;i++) sum+=a[i];
    long long  max=sum,x=k-1;
    for(int i=k;i<n;i++)
    {
        long long sum=sum+a[i]-a[i-k];
        if(sum > max)
        {
            max=sum;
            x=i;
        }
    }
    return x-k+1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++)  cin >> a[i];
        int z=findmax(a,n,k);
        for(int i=z;i<z+k;i++) cout << a[i] <<" ";
        cout << endl;
    }
}*/