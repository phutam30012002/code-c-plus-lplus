#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int check =0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x) 
            {
                cout <<"1\n";
                check=1;
                break;
            }
        }
        if(check == 0) cout <<"-1\n";
        
     }
}