#include<bits/stdc++.h>
using namespace std;
int check(string s,int i,int j)
{
    if(s[i]==s[j]) return 1;
    return 0;
}
int main()
{
    int t;
    cin >>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        int dem =s.size();
        int cd;
        for(int i=0;i<s.size();i++)
        {
           for(int cd=i+1;cd<s.size();cd++)
           {
             if(check(s,i,cd)==1) dem++;
           }
        }
        cout << dem << "\n";
    }
}