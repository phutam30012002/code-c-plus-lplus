#include<bits/stdc++.h>
using namespace std;
struct sv
{
    string msv,name,lop;
    double d1,d2,d3;
};
void input(sv &a)
{
    cin >> a.msv;
    cin.ignore();
    getline(cin ,a.name);
    cin >> a.lop;
    cin.ignore();
    cin >> a.d1 >> a.d2 >> a.d3;
}
struct sv a[100];
int n;
void xl(sv a[],int n )
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].msv > a[j].msv)
            {
                sv x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
}
void output(sv a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << i+1 <<" " << a[i].msv <<" " << a[i].name <<" " <<a[i].lop<<" ";
        cout << fixed << setprecision(1)<< a[i].d1 <<" " << a[i].d2 <<" " << a[i].d3;
        cout <<"\n";
    }
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    struct sv a[n];
    for(int i=0;i<n;i++) input(a[i]);
    xl(a,n);
    output(a,n);
}