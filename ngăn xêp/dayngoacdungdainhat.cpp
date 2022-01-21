#include<bits/stdc++.h>
using namespace std;
int tinh(string s)
{
    stack<int> st;int kq=0;
    st.push(-1);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(') st.push(i);
        else{
            st.pop();
            if(!st.empty())
            {
                kq= max(kq,i-st.top());
            }else st.push(i);
        }
    }
    return kq;
}
main()
{
    int t;string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        cout << tinh(s) << endl;
    }
}