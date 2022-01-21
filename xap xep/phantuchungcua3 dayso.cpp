#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n1,n2,n3;
        cin >> n1 >> n2 >> n3;
        long long  a[n1],b[n2],c[n3];
        multiset <long long > x;
        for(int i=0;i<n1;i++)
        {
            cin >> a[i];
            x.insert(a[i]);
        }
        for(int i=0;i< n2;i++) cin >> b[i];
        for(int i=0;i< n3;i++) cin >> c[i];
        for(int i=0;i < n1;)
    }
}