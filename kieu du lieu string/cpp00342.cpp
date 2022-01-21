#include<bits/stdc++.h>
using namespace std;
int tong(vector<char> s)
{
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=(s[i]-'0');
    }
    return sum;
}
/*int sum(int n)
{
    int t=0;
    if(n>=0&&n<=9) return n;
    while(n>0)
    {
        t+=n%10;
        n/=10;
    }
    return sum(t);
}*/
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        vector<char> s1;
        vector<char> s2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0'&&s[i]<='9') s2.push_back(s[i]);
            else s1.push_back(s[i]);
        }
        for(int i=0;i<s1.size();i++)
        {
            for(int j=i+1;j<s1.size();j++)
            {
                if(s1[i]>s1[j])
                {
                    char c=s1[i];
                    s1[i]=s1[j];
                    s1[j]=c;
                }
            }
        }
        for(int i=0;i<s1.size();i++) cout << s1[i];
        cout << tong(s2);
        cout <<"\n";
    }
}