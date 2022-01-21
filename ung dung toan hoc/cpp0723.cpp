#include<bits/stdc++.h>
using namespace std;
string  xl (string s)
{
    int k=s.size();
    int a[10]={0};
    for(int i=0;i<k;i++)
    {
        if (s[i] == '1'
            || s[i] == '2'
            || s[i] == '3'
            || s[i] == '5'
            || s[i] == '7')
            {
                a[s[i]-48]+=1;
            }
        if (s[i] == '4') 
        {
           a[2] += 2;
           a[3]++;
        }  
        if (s[i] == '6') 
        {
            a[5]++;
            a[3]++;
        }  
        if (s[i] == '8') 
        {
            a[7]++;
            a[2] += 3;
        }
        if (s[i] == '9') {
           a[7]++;
           a[3] += 2;
           a[2]++;
        }
    }
    string t="";
    for (int i = 9; i >= 2; i--) 
    {
            int ctr = a[i];
            while (ctr--) {
                t += (char)(i + 48);
            }
    }
    return t;
 
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << xl(s) <<endl;
    }
}