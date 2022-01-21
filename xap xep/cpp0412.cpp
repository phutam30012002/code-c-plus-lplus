#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    int c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                }
            }
        }
        sort(a,a+n,greater<int>())
        for(int i=0;i<n;i++) cout << a[i] <<" ";
        cout <<"\n";
    }
    
}