#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        int k;
        string s;
        cin >> k;
        cin >> s;
        multiset<char> x;
        for(int i=0;i< s.size();i++)
        {
            x.insert(s[i]);
        }
       string s1;
        for(char i:x) 
        {
           s1=s1+i;
        }
        reverse(s1.begin(),s1.end());
        cout << s1;
        cout <<endl;
    }
}