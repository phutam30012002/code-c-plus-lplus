#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        int a=1,b=0,c=0,d=0,e=0;
        char x=s[5];
        for(int i=5;i<s.size();i++)
        {
            if(s[i]!='.') 
            {
            if(s[i]>x) a++;
            if(s[i]==x) b++;
            if(s[i]=='6'||s[i]=='8') c++;
            x=s[i];
            }
           
        }
        x=s[5];
        for(int i=5;i<=8;i++) if(s[i]==x) d++;
        x=s[10];
        for(int i=9;i<=10;i++) if(s[i]==x) e++;
        if(a==5||b==5||c==5||(d==3&&e==2)) cout << "YES\n";
        else cout <<"NO\n";
    }
}