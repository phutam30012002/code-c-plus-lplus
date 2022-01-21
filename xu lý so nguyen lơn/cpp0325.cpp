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
        int c=0,l=0;
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0) c+=s[i]-'0';
            if(i%2!=0) l+=s[i]-'0';
        }
        if(abs(c-l)%11==0) cout << "1\n";
        else cout <<"0\n"; 
    }
}