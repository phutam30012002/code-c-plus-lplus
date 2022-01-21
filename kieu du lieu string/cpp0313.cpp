#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
    string s1,s2,x;
    getline(cin ,s1);
    getline(cin, s2);
    vector<string> a;
    stringstream s11(s1);
    while(s11 >> x)
    {
        a.push_back(x);
    }
    for(int i=0;i<a.size();i++)
    {
        if(a[i].compare(s2)!=0) cout << a[i] <<" "; 
    }
    
}