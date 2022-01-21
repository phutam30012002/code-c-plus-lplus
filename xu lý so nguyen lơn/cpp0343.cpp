#include<bits/stdc++.h>
using namespace std;
int utc(int a[],int n)
{
    int c=0,l=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0) c++;
        else l++;
    }
    if((n%2==0 && c>l)||(n%2!=0 && l>c)) return 1;
    return 0;
}
int main()
{
    int t;
    cin >>t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin , s);
        vector<string> s1;
        string token;
        stringstream s2(s);
        
        while(s2 >> token)
        {
            s1.push_back(token);
        }
        int a[s1.size()];
       for(int i=0;i<s1.size();i++) 
       {
          a[i]=stoi(s1[i]);
       }
       //for(int i=0;i<s1.size();i++) cout << a[i] << " ";
       if(utc(a,s1.size())==1) cout << "YES\n";
       else cout <<"NO\n";
    }
}
