#include<bits/stdc++.h>
using namespace std;
void sortt(int a1[],int n,int a2[],int m,int ans[])
{
    map< int ,int > mp;
    int ind=0;
    for(int i=0;i<n;i++) mp[a1[i]]+=1;
    for(int i=0;i<m;i++)
    {
        if(mp[a2[i]]!=0)
        {
            for(int j=1;j<=mp[a2[i]];j++) ans[ind++]=a2[i];
        }
        mp.erase(a2[i]);
    }
    for(auto it:mp)
    {
        for(int j=1;j<=it.second;j++)
        ans[ind++]=it.first;
    }
}
void input(int a[],int n)
{
    for(int i=0;i<n;i++) cin >> a[i];
}
void output(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] <<" ";
    }
    cout <<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int a1[n],a2[m],a[n];
        input(a1,n);
        input(a2,m);
        sortt(a1,n,a2,m,a);
        output(a,n);
    }
    return 0;
}