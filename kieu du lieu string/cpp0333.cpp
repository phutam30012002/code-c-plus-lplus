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
    vector<string> s1;
    stringstream ss(s);
    string token;
    while(ss >> token)
    {
        s1.push_back(token);
    }
    int a=s1.size();
    for(int i=0;i<a-1;i++)
    {
        s1[i][0] -=32;
        cout << s1[i] ;
        if(i!=a-2) cout <<" "; 
    }
    cout <<", ";
    for(int i=0;i<s1[a-1].size();i++)
    if(s1[a-1][i]>='a'&&s1[a-1][i]<='z') s1[a-1][i]-=32;
    cout <<s1[a-1];
}