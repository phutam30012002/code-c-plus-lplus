#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n ;
        long long a[n],b[n];
        for(int i=0;i<n;i++) 
        {
            cin >> a[i];
            b[i]=i;
        }
        for(int i=0;i<n;i++)
        {
            int check=0;
            for(int j=0;j<n;j++)
            {
                if(b[i]==a[j]) 
                {
                    check=1;
                    
                }
            }
            if(check==1) cout <<b[i]<<" ";
            if(check ==0) cout <<"-1"<<" ";
        }
        cout <<"\n";
    }
}