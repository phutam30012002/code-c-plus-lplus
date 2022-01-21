#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string,int> MAP;
    
    while(n--)
    {
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            s[i]=towlower(s[i]);
        }
        string token;
        stringstream s6(s);
        vector<string > s1;
        while(s6 >> token) 
        {
            s1.push_back(token);
        }
        string s2="";
        s2+=s1[s1.size()-1];
        for(int i=0;i<s1.size()-1;i++)
        {
            s2+=s1[i][0];
        }
       
       if(MAP.find(s2)!=MAP.end())
       {
           cout << s2 <<++MAP[s2] <<"@ptit.edu.vn";
       }else 
       {
           MAP[s2]=1;
           cout << s2 <<"@ptit.edu.vn";
       }
       //cout << s2 <<"@ptit.edu.vn "<<"\n";
       cout <<"\n";
    }
}