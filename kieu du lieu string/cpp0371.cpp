#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&& s[i]<='Z') s[i]+=32;
    }
    string s2;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
        {
            s2.push_back('.');
            s2.push_back(s[i]);
        }
    }
    for(int i=0;i<s2.size();i++)
    {
        cout << s2[i];
    }
}