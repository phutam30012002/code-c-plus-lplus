#include<bits/stdc++.h>
using namespace std;
class PhanSo {
    private:
        long long ts,ms;
    public:
        PhanSo (long long a, long long b){
            ts=a;
            ms=b;
        }
        friend istream& operator>> (istream& s, PhanSo& a){
            s >> a.ts >> a.ms;
            return s;
        }
        friend ostream& operator<< (ostream& s , PhanSo a ){
            s << a.ts << "/" << a.ms;
            return s;
        }
        void rutgon(){
            long long x=__gcd(ts,ms);
            ts=ts/x;
            ms=ms/x;
        }
        friend PhanSo operator+ (PhanSo a ,PhanSo b)
        {
            PhanSo tong(1,1);
            a.rutgon();
            b.rutgon();
            tong.ts=a.ts*b.ms+a.ms*b.ts;
            tong.ms=a.ms* b.ms;
            tong.rutgon();
            return tong;
        }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}