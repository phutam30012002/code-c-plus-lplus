#include<bits/stdc++.h>
using namespace std;
void xuly(int a[],int n)
{
    stack<int> st;
    int r[n],i;
    for(i=n-1;i>=0;i--)
    {
        while(!st.empty()&& a[i]>= st.top()) st.pop();
        if(st.empty()) r[i]=-1;
        else {
            r[i]=st.top();
        } 
        st.push(a[i]);
    }
    for(i=0;i<n;i++) cout << r[i] <<" ";
    cout << endl;
}
main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        xuly(a,n);
    }
}