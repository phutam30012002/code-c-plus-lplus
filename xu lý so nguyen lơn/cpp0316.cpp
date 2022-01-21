#include<bits/stdc++.h>
using namespace std;
int sum(string s)
{
    long long su=0;
    if(s[0]=='0') return 0;
    for(int i=0;i<s.size();i++)
    {
        su+=(s[i]-'0');
    }
    if(su%9==0) return 1;
    else return 0;
} 
int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--)
    {
        string n;
        cin >> n;
        if(sum(n)==1) cout <<"1\n";
        else cout <<"0\n";
    }
}