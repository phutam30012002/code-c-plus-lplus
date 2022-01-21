#include<bits/stdc++.h>
using namespace std;
vector <long long> s(1001);
const long long r=1e9+7;
void fb()
{
    s[0]=0;
    s[1]=s[2]=1;
    for(int i=3;i<=10000;i++)
    {
        s[i]=(s[i-1]%r)+s[i-2]%r;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        fb();
        cin >>n;
        cout << s[n]%r <<"\n";
    }
}
