#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin ,s);
        for(int i=0;i<s.size();i++) 
        {
            if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
        }
        vector<string > s1;
        stringstream ss(s);
        string token;
        while( ss >> token)
        {
            s1.push_back(token);
        }
        for(int i=0;i<s1.size();i++)
        {
            s1[i][0]-=32;
        }
        if(n==1)
        {
            cout << s1[s1.size()-1] <<" ";
            for(int i=0;i<s1.size()-1;i++)
            {
                cout << s1[i] <<" ";
            }
            cout <<"\n";
        }
        if(n==2)
        {
            for(int i=1;i<s1.size();i++)
            {
                cout << s1[i] <<" ";
            }
            cout << s1[0] <<"\n";
        }
    }
}