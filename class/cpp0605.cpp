#include<bits/stdc++.h>
using namespace std;

class PhanSo
{
private:
    long long  ts,ms;
public:
    // PhanSo(long long ts1 , long long ms1 ){
    //    this ->ts = ts1;
    //    this ->ms = ms1;
    // }
    PhanSo(long long ts1 , long long ms1 ){
        ts = ts1;
        ms = ms1;
    }
    void rutgon()
    {
        long long h=__gcd(ts,ms);
        ts = ts/h;
        ms = ms/h;
    }
    friend istream& operator>> (istream& s, PhanSo& a){
       
        s >> a.ts >> a.ms;
        return s;
    }
    friend ostream& operator<< (ostream& s, PhanSo& a){
       
        s << a.ts << "/"<< a.ms;
        return s;
    }
};
int main() {
	PhanSo p(1,1);//ha khoi tao;
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
