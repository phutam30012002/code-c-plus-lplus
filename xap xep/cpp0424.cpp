#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k,n;
        cin >>k >>n;
        int a[k][n];
        int b[n*k],l=0;
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >>a[i][j];
                b[l++]=a[i][j];
            }
        }
        for(int i=0;i<l;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                if(b[i]>b[j])
                {
                    int c=b[i];
                    b[i]=b[j];
                    b[j]=c;
                }
            }
            cout << b[i] <<" ";
        }
        cout <<"\n";
    }
}