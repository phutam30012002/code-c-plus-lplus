#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n>10){
            int a[100];
        int x=0;
      while(n>0)
        {
        a[x++]=n%10;
        n/=10;
        }
        for(int i=0;i<x;i++)
        {
            if(a[i]>=5&& i!=x-1) 
            {
                a[i]=0;
                a[i+1]=a[i+1]+1;
            }
            
            if(a[i]<5 && i!= x-1) a[i]=0;
            
        }
        for(int i=x-1;i>=0;i--)
        {
            cout << a[i] ;
        }
        cout << endl;
        }else 
        {
            cout  << n << endl;
        }
    }
}    