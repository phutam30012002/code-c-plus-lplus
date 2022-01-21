#include<iostream>
#include<string>
using namespace std;
string daonguoc(string s)
{
    int lenght=s.length();
    string temp;
    for(int i=lenght-1;i>=0;i--)
    temp.push_back(s[i]);
    return temp;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
       if(s.compare(daonguoc(s))==0) cout <<"YES\n";
       else cout <<"NO\n";

    }
    
}