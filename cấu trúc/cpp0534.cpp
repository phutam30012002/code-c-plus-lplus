#include<bits/stdc++.h>
using namespace std; 
int tn(string s)
{
    string s1=s;
    reverse(s.begin(),s.end());
    if(s1==s && s1.size()>1) return 1; 
    return 0;
}
bool cmp(pair<string,int>& a,pair<string,int>& b)
{
    return a.first.size() > b.first.size()||(a.first.size()==b.first.size() && a.first> b.first);
}
void sort(map<string ,int >& mp)
{
    vector<pair<string ,int> >A;
    for(auto& it : mp)
    {
        A.push_back(it);
    }
    sort(A.begin(),A.end(),cmp);
    for(auto& it: A)
    {
        if(it.second!=0)
        {
             cout << it.first <<" " <<it.second <<endl;
             it.second=0;
        }
    }
}
int main()
{
    map< string ,int > mp;
    string s;
    int dem=0;
    while(cin >> s)
    {
        if(tn(s)==1) 
        { 
              mp[s]++;  
        }
       // dem++;
       // if(dem==37) break;
    }
    sort(mp);
}
