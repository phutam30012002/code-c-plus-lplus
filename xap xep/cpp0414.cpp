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
        set<int> s;
        for(int i=0;i<n;i++)
        {
            while(a[i]>0)
            {
                int x=a[i]%10;
                s.insert(x);
                a[i]/=10;
            }
        }
        for(int i:s) cout << i<<" ";
        cout <<"\n";
    }
}