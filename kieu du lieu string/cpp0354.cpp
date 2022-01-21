#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--)
    {
        string s;
        cin >>s;
        int dem =1;
        string s2;
        int a[100],x=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=-1)
            {
                int j=i+1;
               while(s[i]==s[j])
               {
                   dem++;
                   s[j]=-1;
                   j++;
               }
               cout << s[i] << dem;
               dem=1;
            }
        }
        cout << "\n";
    }
}