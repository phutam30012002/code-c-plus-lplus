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
       cin>>s1>>s2;
        if(s1.size()<s2.size())
        {
            string s12=s1;
            s1=s2;
            s2=s12;
        }
        string token="0";
        while(s2.size()<s1.size())
        {
            s2.insert(0,token);
        }
        //cout << s1 <<" " << s2;
        int nho =0;
        int a[10000],j=0;
        for(int i=s1.size()-1;i>=0;i--)
        {
            int tmp=s1[i]-'0'+s2[i]-'0'+nho;
            a[j++]=tmp%10;
            nho=tmp/10;

        }
        if(nho!=0) a[j++] =nho;
        for(int i=j-1;i>=0;i--) cout << a[i];
        cout <<"\n";
         
    }
}