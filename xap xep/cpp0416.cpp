#include<iostream>
using  namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin  >> a[i];
            if(a[i]>k) a[i]=-1;
        }
        int dem =0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=-1)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(a[i]+a[j]==k)
                    {
                        dem ++;
                    }
                }
                a[i]=-1;
            }
        }
        cout << dem <<"\n";
    }
}