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
        for(int i=0;i<n;i++) cin >> a[i];
        int b[n]={0},sum =0,dem ;
        for(int i=0;i<n;i++)
        {
            if(b[i]==0)
            {
                 dem =1;
                for(int j=i+1;j<n;j++)
                {
                    if(a[i]==a[j])
                    {
                        dem++;
                        b[j]=1;
                    }
                }
                if(dem >1) sum+=dem;
            }
            
        }
        cout << sum  <<"\n";
    }
}