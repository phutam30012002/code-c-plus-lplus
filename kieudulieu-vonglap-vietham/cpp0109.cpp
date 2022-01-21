#include<bits/stdc++.h>
using namespace std;
int cl(int n)
{
    int c=0,l=0;
    while(n>0)
    {
        int x=n%10;
        if(x%2==0) c++;
        else l++;
        n/=10;
    }
    if(c==l) return 1;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int a=pow(10,n-1);
    int b=a*10;
    int dem =0;
    for(int i=a;i<b;i++)
    {
        if(cl(i)==1)
        {
            cout << i <<" ";
        dem ++;
        }
        if(dem==10)
         {
             cout <<"\n";
             dem =0;
        }
        
    }
}