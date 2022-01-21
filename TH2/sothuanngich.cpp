#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        string s2=s;
        reverse(s.begin(),s.end());
        if(s2==s) cout << "YES\n" ;
        else cout << "NO\n";
    
    }
}