/*#include<bits/stdc++.h>
using namespace std;
int k;
bool ss(int x,int y)
{
    return abs(k-x)<abs(k-y);
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n >> k ;
        int a[n];
        for(int i=0;i<n;i++)  cin >> a[i];
        sort (a,a+n,ss);
        for(int i=0;i<n;i++ )
        cout << a[i] <<" ";
        cout <<"\n";
    }
}*/
#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = abs(x - a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int c=0;
            for (int j = 1; j < n; j++)
            {
                if (b[j-1] > b[j]) {
                    swap(b[j-1], b[j]);
                    swap(a[j-1], a[j]);
                    c=1;
                }
            }
            if(c==0) break;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}