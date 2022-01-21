#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238;
struct canh
{
    double x,y;
};
struct canh ds[3];
void input (canh ds[3])
{
    for(int i=0;i<3;i++)
    {
        cin >> ds[i].x >> ds[i].y;
    }
}
double  xl(canh ds[3])
{
    double a,b,c,s,r;
    a=sqrt((ds[0].x-ds[1].x)*(ds[0].x-ds[1].x)+(ds[0].y-ds[1].y)*(ds[0].y-ds[1].y));
    b=sqrt((ds[0].x-ds[2].x)*(ds[0].x-ds[2].x)+(ds[0].y-ds[2].y)*(ds[0].y-ds[2].y));
    c=sqrt((ds[1].x-ds[2].x)*(ds[1].x-ds[2].x)+(ds[1].y-ds[2].y)*(ds[1].y-ds[2].y));
    if(a+b>c && b+c>a && a+c>b) 
    {
        s=(double)sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
        r=(double)(a*b*c)/(s);
        return r;
    }else return 0;
}
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        struct canh ds[3];
        input(ds);
        double  x=xl(ds);
        if(x==0) 
        {
            cout << "INVALID";
        }else 
        {
            cout<< fixed <<setprecision(3) << (double)x*x*PI ;
        }
        cout <<"\n";
    }
}