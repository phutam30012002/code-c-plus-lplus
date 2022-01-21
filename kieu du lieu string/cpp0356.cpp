#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    getchar();
    vector<string> s;
    string s1;
    for(int i=0;i<t;i++)
    {
        getline(cin , s1);
        s.push_back(s1);
    }
    int dem =1;
    set<string> s2;
    for(int i=1;i<s.size();i++)
    {
        s2.insert(s[i]);
    }
    cout << s2.size() ;
}