#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s1;
    string s;
    int dem=0;
    while(cin >> s)
    {
        dem++;
        string s2="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.'||s[i]=='?'||s[i]=='!') 
            {
                s2=s[i];
                s.erase(i);
            }
             s[i]=towlower(s[i]);
        }
        if(dem==1)  s[0]-=32;
        s1.push_back(s);
        if(s2.size()!=0) s1.push_back(s2);
      //  if (dem==42) break;
    }
    for(string x:s1)
    {

        int check;
        if(x=="."||x=="?"||x=="!")
        {
            check=1;
            cout << endl;
        }else
        {
            if(check==1) x[0]-=32;
            cout << x <<" ";
            check=0;
        }
    }

}