#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++) 
    {
        cin >> a[i];
       if(a[i] %2!=0) a[i]=1;
    }
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=1)
        {
            for(int j=i+2;j<n;j++)
            {
               if(a[j]!=1)
               {
                    if(a[i] > a[j]) dem++;
               }
            }
        }
    }
    cout << dem ;
}