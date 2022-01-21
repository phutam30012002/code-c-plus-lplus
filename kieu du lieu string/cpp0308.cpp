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
        cin >> s;
        int a[s.size()]={0};
        for(int i=0;i<s.size();i++)
        {
            int check=1;
            if(a[i]==0)
            {
                for(int j=i+1;j<s.size();j++)
                {
                    if(s[i]==s[j])
                    {
                        check =0;
                        a[j]=1;
                    }
                }
                if(check==1) cout<< s[i];
            }
        }
        cout << "\n";
    }
}
