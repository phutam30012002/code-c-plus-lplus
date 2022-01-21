#include<bits/stdc++.h>
using namespace std;
long long doi(string s)
{
    long long n=0;
    for(int i=0;i<s.size();i++)
    {
        n=n*10+s[i]-'0';
    }
    return n;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        if(s1.size()<s2.size()) swap(s1,s2);
        while(s2.size()< s1.size()) s2="0"+s2;
        //cout << s1 << " " << s2;
        string s11=s1,s22=s2;
        for(int i=0;i< s1.size();i++)
        {
            if(s1[i]=='6') s1[i]='5'; 
            if(s2[i]=='6') s2[i]='5';
            if(s11[i]=='5') s11[i]='6';
            if(s22[i]=='5') s22[i]='6';
        }
        long long min=doi(s1)+doi(s2);
        long long max=doi(s11) +doi(s22);
        cout << min << " " << max << endl;

    }
}