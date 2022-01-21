#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        if(s1.size()<s2.size()) swap(s1,s2);
        while(s2.size()<s1.size()) s2="0"+s2;
        int a[10000],j=0;
        int nho=0;
        if(s1<s2) swap(s1,s2);
        for(int i=s1.size()-1;i>=0;i--)
        {
                int tmp=s1[i]-'0'-s2[i]+'0'-nho;
            if(tmp <0)
            {
                tmp=tmp+10;
                a[j++]=tmp;
                nho=1;
            }else
            {
                a[j++]=tmp;
                nho=0;
            }
        } 
            for(int i=j-1;i>=0;i--) cout << a[i] ;
            cout <<"\n";
    }
}