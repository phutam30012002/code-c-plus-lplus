#include<iostream>
#include<string>
using namespace std;
string sum(string s1,string s2)
{
    string s="";
    int nho =0;
    for(int i=s1.size()-1;i>=0;i--)
    {
        int tmp=s1[i]-'0'+s2[i]-'0'+nho;
        s=(char)(tmp%10+'0')+s;
        nho=tmp/10;
    }
    if(nho!=0) s=(char)(nho+'0')+s;
    while(s[0]=='0') s.erase(s.begin());
    return s;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       string s1,s2;
       cin >> s1 >> s2;
       if(s1.size()<s2.size()) swap (s1,s2);
       while(s2.size()<s1.size()) s2='0'+s2;
       string s11,s22;
       s11=s1;
       s22=s2;
      for(int i=0;i<s1.size();i++) 
      {
          if(s1[i]=='5')  s1[i]='6';
          if(s2[i]=='5')  s2[i]='6';
      }
      for(int i=0;i<s11.size();i++)
      {
           if(s11[i]=='6')  s11[i]='5';
          if(s22[i]=='6')  s22[i]='5';
      }
      
       cout << sum(s11,s22) <<" " << sum(s1,s2) <<"\n";
    }
}