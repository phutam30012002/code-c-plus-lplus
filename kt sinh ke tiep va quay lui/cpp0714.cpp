#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int c=a[n-1];
        a[n-1]=a[n-2];
        a[n-2]=c;
        for(int i=0;i<n;i++)
        {
            cout << a[i] <<" ";
        }
        cout <<"\n";
    }
}