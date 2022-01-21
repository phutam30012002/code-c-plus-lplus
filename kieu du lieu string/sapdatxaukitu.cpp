#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        map < char,int > xs;
        int max=0;
        for(int i=0;i< s.size();i++)
        {
            xs[s[i]]++;
            if(xs[s[i]]>max) max=xs[s[i]];
        }
       // cout << max <<"\n";
        int n=s.size();
        if(n%2==0)
        {
            if(max <= n/2) cout << "1\n";
            else cout << "0\n";
        }else{
            if(max <= n/2+1) cout << "1\n";
            else cout << "0\n";
        }
    }
}