/*#include<bits/stdc++.h>
using namespace std;
int countsubstr(string s,int m,int n)
{
    // int dem=0;
    // for(int i=0;i<m;i++)
    // {
    //     int x=0;
    //     for(int j=i;j<m;j++)
    //     {
    //         x=(x*10+s[j]-'0');
    //         if(x%n==0) dem++;
    //     }
    // }
    // return dem ;
    int a[m][n];
    memset(a , 0 , sizeof(a));
    a[0][(s[0]-'0')%n]++;
    for(int i=1;i<m;i++)
    {
        a[i][(s[i]-'0')%n]++;
        for(int j=0;j<n;j++)
        {
            a[i][j]+=a[i-1][j];
            a[i][(j*10 + (s[i]-'0'))%n] += a[i-1][j];

        }
    }
     return a[m-1][0];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> m >> n;
        string s;
        cin >> s;
        cout << countsubstr(s,m,n)<<"\n";
    }
}*/
#include<bits/stdc++.h>
using namespace std;
long long countDivisibleSubseq(string str, int n)
{
    int len = str.length();
 
   
    long long dp[len][n];
    memset(dp, 0, sizeof(dp));
 
    
    dp[0][(str[0]-'0')%n]++;
 
    for (int i=1; i<len; i++)
    {
        
        dp[i][(str[i]-'0')%n]++;
 
        for (int j=0; j<n; j++)
        {
            
            dp[i][j] += dp[i-1][j];
            dp[i][(j*10 + (str[i]-'0'))%n] += dp[i-1][j];
        }
    }
 
    return dp[len-1][0];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,m;
        cin >> m >> n;
        string s;
        cin >> s;
        cout << countDivisibleSubseq(s, n) << "\n";
    }
}