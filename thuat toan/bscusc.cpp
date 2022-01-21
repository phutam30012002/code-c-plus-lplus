#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    if(a==0||b==0) return a+b;
    while(a!=b)
    {
        if(a>b) a-=b;
        if(b>a) b-=a;
    }
    return a;
}
int main()
{
    long long  t,a,b;
    cin >> t;
    while(t--)
    {
        cin >>a >>b;
        cout <<(a*b)/GCD(a,b);
       cout << " "<< GCD(a,b);
       cout << endl;
    }
    return 0;
}