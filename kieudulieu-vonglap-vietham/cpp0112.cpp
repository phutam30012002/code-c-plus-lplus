#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double a,b,c,d;
        cin >> a >>b >> c >>  d;
        double x=(c-a)*(c-a);
        double y=(d-b)*(d-b);
        cout<< fixed << setprecision(4) << (double)(sqrt(x+y)) << "\n";
        
    }
}