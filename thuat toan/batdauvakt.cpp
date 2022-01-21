#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        if(n[0]==n[n.size()-1]) cout << "YES\n";
        else cout <<"NO\n";
    }
}