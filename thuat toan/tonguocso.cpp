#include<bits/stdc++.h>
using namespace std;
int uoc(int n)
{
    int sum=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) 
        {
            sum+=i;
            int j=n/i;
            if(j!=i) sum+=j;
        }
    }
    return sum;
}
int main()
{
    int a,b;
    cin >> a >> b;
    int dem=0;
    for(int i=a;i<=b;i++)
    {
        if(uoc(i)>i) 
        {
            dem++;
            cout << i<< " ";
           
        }
    }
    cout << dem ;
}