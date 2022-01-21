#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        long long max=a[0];
        for(int i=0;i<n;i++)
        {
            long long tich=a[i];
            for(int j=i+1;j<n;j++)
            {
                tich*=a[j];
               // if (tich==0) break;
               if(tich > max) max=tich;
            }
        }
        cout << max <<"\n";
    }
}