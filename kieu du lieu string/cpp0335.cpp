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
        cin >>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<'0'||s[i]>'9') s[i]=' ';
        }
        vector<string> s1;
        stringstream s2(s);
        string token;
        while(s2 >> token)
        {
            s1.push_back(token);
        }
        long long a[1000],j=0;
        for(int i=0;i<s1.size();i++)
        {
            a[j++]=stoi(s1[i]);

        }
        sort(a,a+j);
        cout << a[j-1] <<"\n";
    }
}