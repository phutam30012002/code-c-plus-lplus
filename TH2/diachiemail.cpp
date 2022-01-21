#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&& s[i]<='Z') s[i]+=32;
    }
    vector<string> s1;
    string s2;
    stringstream ss(s);
    while(ss >> s2)
    {
        s1.push_back(s2);
    }
    string s3="@ptit.edu.vn";
    string s4="";
    for(int i=0;i<s1.size()-1;i++)
    {
        s4+=s1[i][0];
    }
    s4+=s1[s1.size()-1] ;
    s4+=s3;
    cout << s4 ;
}