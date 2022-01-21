#include<bits/stdc++.h>
using namespace std;
int check(string s)
{
    stack<int> st; int i,j;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='(') st.push(i);
        else if(s[i]==')'){
            j=st.top(); st.pop();
            if(i-j==2) return 1;
            if(s[j+1]=='('&& s[i-1]==')') return 1;
        }
    }
    return 0;
}
main(){
    int t;string s;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        getline(cin , s);
        if(check(s)) cout <<"Yes" << endl;
        else cout << "No" << endl;
    }
}