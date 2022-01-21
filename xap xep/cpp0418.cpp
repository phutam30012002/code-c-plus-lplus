#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    cin >> t;
    while(t--)
    {
        int m,n;
        cin >> n >> m;
        int a[n],b[m];
        set<int> s;
        set<int> s1;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int x=0;
        for(int i=1;i<=m;i++)
        {
            cin >> b[i];
            s.insert(b[i]);
            if((n+i-s.size())!=x) 
            {
                 s1.insert(b[i]);
                 x++;
            }
        }
        for(int i:s) cout << i <<" " ;
        cout << "\n";
        for(int i:s1) cout << i <<" " ;
        cout <<"\n";
    }
}