#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    set<int> x;
    for(int i=0;i<n;i++)
    {
        x.insert(a[i]);
    }
    for(auto i:x)
    {
        cout << i << " ";
    }
}