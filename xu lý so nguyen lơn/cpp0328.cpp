#include<bits/stdc++.h>
using namespace std;
string s;
int check(int x)
{
    int dem=0;
    for(int i=0;i<s.size();i++)
    {
        long long n=0;
        for(int j=i;j<s.size();j++)
        {
            n=n*10+s[j]-'0';
            n%=x;
            if(n==0) dem++;
        }
    }
    return dem;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        cin >> s;
        cout << check(8)-check(24)<<"\n";
    }
}