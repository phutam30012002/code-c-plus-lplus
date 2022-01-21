/*#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long  a, b, s;
        cin >> a >> b;
       // = s * a % c;
       int dem =0;
       for(int i=1;i<a;i++)
       {
           s=1;
          for(int k=1;k<=2;k++)
           s=s*i%b;
           if(s==1) dem ++;
       }
        cout << dem  << endl;
    }
}*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int findCountOfSolutions(int n, int p)
{
    
    ll ans = 0;
    for (ll x=1; x<p; x++)
    {
        if ((x*x)%p == 1)
        {
            ll last = x + p * (n/p);
            if (last > n)
                last -= p;
            ans += ((last-x)/p + 1);
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,p;
        cin >> n >> p;
        cout <<findCountOfSolutions(n,p) <<"\n";  
    }
    return 0;
}