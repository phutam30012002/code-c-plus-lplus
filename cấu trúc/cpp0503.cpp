#include<bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long ts,ms;
};
long long ucln(long long a,long long b)
{
    if(b==0 ) return a;
    return ucln(b,a%b);
}
void nhap( struct PhanSo &p)
{
     cin >>p.ts >>p.ms;
}
void rutgon(struct  PhanSo &p )
{
    long long a=ucln(p.ts,p.ms);
    p.ts/=a;
    p.ms/=a;
    
}
void in(struct  PhanSo p)
{
    cout << p.ts << "/" << p.ms;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
