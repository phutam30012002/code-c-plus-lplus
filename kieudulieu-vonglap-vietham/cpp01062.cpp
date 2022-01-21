#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        string s,s1;
        cin >> s;
        s1=s;
        reverse(s.begin(),s.end());
        if(s.compare(s1)==0) cout <<"YES\n";
        else cout << "NO\n";
    }
}