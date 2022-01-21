#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin , s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
    }
    string s1="@ptit.edu.vn";
    vector<string> s2;
    string token;
    stringstream ss(s);
    while(ss >> token)
    {
        s2.push_back(token);
    }
    string s3;
    int a=s2.size();
    s3+=s2[a-1];
    for(int i=0;i<a-1;i++)
    { 
        s3+=s2[i][0];
    }
    s3+=s1;
    cout << s3 ;
}