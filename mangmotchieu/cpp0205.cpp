#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int max=0;
        for (int  i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]>=max) max=a[i];
        }

        cout<< max <<"\n";
    }
}