#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    getchar();
    while(t--)
    {
        string s;
        cin >> s;
        int check=1;
       set<char> s2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<'0'||s[i]>'9'||s[0]=='0')
            {
                check=0;
                break;
            }
           
            s2.insert(s[i]);
        }
       // cout << s2.size();
        if(check==0) cout << "INVALID\n";
        else 
        {
            if(s2.size()==10) cout <<"YES\n";
            else cout << "NO\n";
        }
        
    }
}