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
        int check=1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i+1]!=s[i]+1&&s[i+1]!=s[i]-1)
            {
                cout <<"NO\n";
                check=0;
                break;
            }
        }
        if(check==1) cout <<"YES\n";
    }
}