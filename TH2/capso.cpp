#include<bits/stdc++.h>
using namespace std;
// bool comp(const int a ,const int b)
// {
//     return a>b;
// }
int main()
{
    int t;
    cin >> t; 
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n,greater<int>());
        int dem=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]+a[j]>=k) dem++;
                else break;
            }
        }
        cout << dem <<"\n";
    }
}