#include<iostream>
using namespace std;
int sum(int n)
{
    int tong=0;
    while(n>0)
    {
        tong+=n%10;
        n/=10;
    }
    if(tong<10) return tong;
    return sum(tong);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << sum(n) <<"\n";
    }
}