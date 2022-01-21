#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >>n >>x;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int check =1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                cout << i+1 <<"\n";
                check=0;
                break;
            }
        }
        if(check ==1) cout <<"-1\n";
    }
}