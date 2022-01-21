#include<bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long  ts,ms;
};
void nhap(struct PhanSo & p)
{
    cin >> p.ts >> p.ms;
}
long long ucln(long long a,long long b)
{
    if(b==0) return a;
    return ucln(b,a%b);
}
void rutgon(PhanSo &p)
{
    long long a=ucln(p.ts,p.ms);
    p.ts/=a;
    p.ms/=a;
}
PhanSo tong(PhanSo &p, PhanSo &q)
{
    PhanSo z;
    z.ms=p.ms*q.ms;
    z.ts=p.ts*q.ms+q.ts*p.ms;
    rutgon(z);
    return  z;
}
void in(PhanSo p)
{
    cout << p.ts<< "/" <<p.ms ;
}
int main()
{
    struct  PhanSo p,q;
    nhap(p);nhap(q);
    PhanSo t=tong(p,q);
    in(t);
    return 0;
}

