#include<bits/stdc++.h>
using namespace std;
void sinh(int a[],int n)
{
    for(int i =0;i<n;i++)
    {
        if(a[i]==0) a[i]=1;
        else a[i]=0;
        
    }
}
void xuat(int a[],int n)
{
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i=i+2) a[i]=0;
    for(int i=1;i<n;i+=2) a[i]=1;
    for(int i=1;i<=2;i++)
    {
        xuat(a,n);
        sinh(a,n);
    }

}