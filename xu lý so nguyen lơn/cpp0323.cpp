#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--)
    {
        string s;
        long long m;
        cin >> s >> m;
        int a[1000],k=0;
        for(int i=0;i<s.size();i++) 
        {
            a[i]=s[i]-'0';
           // cout << a[i] <<" ";
        }
        long long j=0;
        for(int i=0;i<s.size();i++)
        {
            j=(j*10+a[i]%m)%m;
        }
        cout << j <<"\n";
    }
}