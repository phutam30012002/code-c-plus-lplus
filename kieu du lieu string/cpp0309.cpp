#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
    getchar();
    string s1;
    getline(cin , s1);
    stringstream s11(s1);
    string token ;
    vector<string> words;
    while(s11 >> token )
    {
        words.push_back(token);
    }
     cout << words.size() <<"\n";
    }
}