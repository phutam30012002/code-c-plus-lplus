#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >>a[i];
        set<int>s; // luu tru cac phan tu khac nhau
        int u=0;
        for(int i=1;i<=n;i++)
        {
            s.insert(a[i]);
            if(i-s.size()==1)
            {
                u=i;
                break;
            }
        }
        if(s.size()==n) cout <<"-1\n";
        else cout<< a[u]<<"\n";
    }
}