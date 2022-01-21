#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--)
    {
        string s;
        cin >> s;
        string s1="084";
        int a=s.find(s1);
        for(int i=0;i<a;i++)
        cout <<s[i];
        for(int i=a+3;i<s.size();i++)
        cout << s[i];
        cout <<"\n";
    }
}