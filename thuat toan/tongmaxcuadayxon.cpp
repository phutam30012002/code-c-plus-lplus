#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {

    cin >> n;
    int a[n+1],f[n],tong=0;
    for(int i=0;i < n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i <n;i++)
    {
        f[i]=a[i];
        for(int j=0;j<i;j++)
        {
            if(a[j] < a[i])
            {
                f[i]=max(f[i],f[j]+a[i]);
            }
        }
        tong= max(tong, f[i]);
    }
    cout << tong << endl;
    }
}