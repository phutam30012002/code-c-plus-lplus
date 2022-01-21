#include<bits/stdc++.h>
using namespace std;
string sum(string s1,string s2)
{
    int size1=s1.size();
    int size2=s2.size();
    int size12=size1+size2;
    vector <int> a,b;
    for(int i=0;i<size1;i++) a.push_back((int )(s1[i]-'0'));
    for(int i=0;i<size2;i++) b.push_back((int )(s2[i]-'0'));
    vector< vector<long long> > s12(size2);
    int x=0;
  // if(s1<s2) swap(s1,s2);
    for(int i=s2.size()-1;i>=0;i--)
    {
        
        int k=0;
        while(k<x) 
        {
            s12[x].push_back(0);
            k++;
        }
        int remember=0,tmp=0;
        for(int j=s1.size()-1;j>=0;j--)
        {
            tmp=a[j]*b[i]+remember;
            s12[x].push_back(tmp%10);
            remember=tmp/10;
        }
        if(remember!=0) s12[x].push_back(remember);
        while(s12[x].size()<size12) s12[x].push_back(0);
         reverse(s12[x].begin(), s12[x].end()) ;
        x++;
    }
    int nho=0;
    string s ="";
    for(int i=s12[0].size()-1;i>=0;i--)
    {
        int tmp=nho;
        for(int j=0;j<s12.size();j++)
            tmp+=s12[j][i];
            s=(char)(tmp%10+'0')+s;
            nho=tmp/10;
    }  
        if(nho!=0) s =(char)(nho+'0') +s;
        if(s[0]=='0') s.erase(s.begin(),s.begin()+1);
    return s;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string x,y;
        cin >> x >> y;
        cout << sum(x,y) <<"\n";
    }
}