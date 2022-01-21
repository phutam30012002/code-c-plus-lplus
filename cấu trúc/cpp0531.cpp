#include<bits/stdc++.h>
using namespace std;
struct mp
{
    int x,y,z;
};
void input(mp ds[])
{
    for(int i=0;i<4;i++)
    {
        cin >> ds[i].x >> ds[i].y >> ds[i].z;
    }
}
void output(mp ds[])
{
    int a1=ds[1].x-ds[0].x;
    int b1=ds[1].y-ds[0].y;
    int c1=ds[1].z-ds[0].z;
    int a2=ds[2].x-ds[0].x;
    int b2=ds[2].y-ds[0].y;
    int c2=ds[2].z-ds[0].z;
    int a = b1 * c2 - b2 * c1 ;
    int b = a2 * c1 - a1 * c2 ;
    int c = a1 * b2 - b1 * a2 ;
    int d=(-a*ds[0].x-b*ds[0].y-c*ds[0].z);
    if(a*ds[3].x+b*ds[3].y+c*ds[3].z+d==0)
    {
        cout << "YES\n";
    }else cout <<"NO\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        mp ds[4];
        input(ds);
        output(ds);
    }
}
