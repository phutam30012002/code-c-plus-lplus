#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a,long long b)
{
    if(b==0) return a;
    return ucln(b,a%b);
}
long long bcnn(long long a,long long b)
{
    return (a*b)/ucln(a,b);
}
struct PhanSo
{
    long long tu,mau;
};
void process(PhanSo &a,PhanSo &b)
{
    PhanSo c;
    c.mau=bcnn(a.mau,b.mau);
    c.tu=a.tu*(c.mau/a.mau)+b.tu*(c.mau/b.mau);
    long long x=ucln(c.tu,c.mau);
    c.tu=c.tu/x;
    c.mau=c.mau/x;
    c.tu*=c.tu;
    c.mau*=c.mau;
    PhanSo d;
    d.tu=a.tu*b.tu*c.tu;
    d.mau=a.mau*b.mau*c.mau;
    long long f=ucln(d.tu,d.mau);
    d.tu/=f;
    d.mau/=f;
    cout << c.tu <<"/" <<c.mau <<" ";
    cout << d.tu <<"/" <<d.mau <<"\n";
}
int  main() {
	long long t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}