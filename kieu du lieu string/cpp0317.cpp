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
        string s1=s;
        reverse(s.begin(),s.end());
        int check=1;
        for(int i=0;i<s1.size();i++)
        {
            if((s1[i]-'0')%2!=0)
            {
                check=0;
                break;
            }
        }
        if(check==1&& s1.compare(s)==0) cout <<"YES\n";
        else cout <<"NO\n";
    }
}