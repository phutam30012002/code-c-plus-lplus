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
        for(int &x:a) cin >> x;
        int lmin[n];
        lmin[0]=a[0];
        for(int i=1;i<n;i++)
        {
            lmin[i]=min(lmin[i-1],a[i]);
        }
        int i=n-1,j=n-1;
        int maxsize=0;
        while(i>=0 && j>=0)
        {
            if(a[j]>=lmin[i])
            {
                maxsize=max(maxsize,j-i);
                i--;
            }else 
            j--;
        }
        cout << maxsize <<"\n";
    }
}