#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n][n],b[n*n],l=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> a[i][j];
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
        }
        cout << b[k-1] <<"\n";
    }
}