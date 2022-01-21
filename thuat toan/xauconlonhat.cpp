#include<bits/stdc++.h>
using namespace std;
int qhd(string s)
{
    char   max='1';
    int vt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] > max) 
        {
            max= s[i];
            vt=i;
        }
    }
    return vt;
}
string xc(string s)
{
    string ss="";
    while(s.size()!=1)
    {
        ss=ss+s[qhd(s)];
        s=s.substr(qhd(s));
    }
    return ss;

}
main()
{
    string s;
    cin >> s;
    cout << xc(s) ;
}