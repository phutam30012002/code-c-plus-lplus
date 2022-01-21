#include<bits/stdc++.h>
using namespace std;
string xl(int m,int s)
{
    if(s>9*m|| (m>1&& s==0)) return "-1";
    string s1="";
    for(int i=0;i<m;i++)
    {
        if(s>9)
        {
            s1.push_back((char)('9'));
            s-=9;
        }
        else
        {
            s1.push_back((char)(s+'0'));
            s=0;
        }
    }
    return s1;
}
string xl2(int m ,int s)
{
    if(s>9*m|| (m>1&& s==0)) return "-1";
    s-=1;
    vector <int > a(m);
    string s1="";
    for(int i=m-1;i>0;i--)
    {
        if(s>9)
        {
            a[i]=9;
            s-=9;
        }
        else
        {
            a[i]=s;
            s=0;
        }
    }
    a[0]=s+1;
    for(int i=0;i<m;i++) s1.push_back(a[i]+'0');
    return s1;
}
int main()
{
    int m,s;
    cin >> m >> s;
    cout << xl2(m,s) <<" " << xl(m,s);
}