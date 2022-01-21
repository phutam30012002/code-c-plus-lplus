#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        sort(a,a+n);
        int dem =0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1]) dem ++;
        }
        if(dem == 0) cout << "-1\n";
        else
         {
             cout << a[0] <<" ";
             for(int i=1;i<n;i++)
             {
                 if(a[i]!=a[0]) {cout <<a[i] <<"\n";
                 break;
                 }
             }
        }

    }
}