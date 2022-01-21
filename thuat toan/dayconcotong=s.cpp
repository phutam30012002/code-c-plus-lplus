#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n,greater<int>());
    int sum=0,dem=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        dem++;
        if(sum > s) 
        {
            sum-=a[i];
            dem--;
        }
        if(sum==s) ;
    }
}