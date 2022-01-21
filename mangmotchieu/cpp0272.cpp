/*#include<bits/stdc++.h>
using namespace std;
const long long r=1e9+7;
long long ucln(long long a,long long  b)
{
    if(b==0) return a;
    return ucln(b,a%b);
}
 int modPrimePow(long long  a, long long  b, long long p)
{
    long long  ret = 1;
    a %= p;
    b %= p - 1;
    while (b > 0) //vòng lặp phân tích b thành cơ số 2
    {
        if (b % 2 > 0)  //ở vị trí có số 1 thì nhân với a^(2^i) tương ứng. Tất cả các phép nhân đều có phép mod p theo sau.
            ret = ret * a % p;
        a = a * a % p;  //tính tiếp a^(2^(i+1)), a^1 -> a^2 -> a^4 -> a^8 -> a^16 v.v...
        b /= 2;
    }
    return (long long ) ret;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        long long h=1;
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]%r;
            h*=a[i];
            h=h%r;
        }
       
        //cout << h<< endl;
        long long  b=ucln(a[0],a[1]);
        for(int i=2;i<n;i++)
        {
            b=ucln(b,a[i]);
        }
        //cout << b << endl;
        cout << modPrimePow(h,b,r) <<"\n";
    }
}*/
#include <bits/stdc++.h>
using namespace std;
long long ucln(int a,int b){
  if(a>b) swap(a,b);
  for(int i=a;i>0;i--){
  	if(b%i==0&a%i==0) return i;
  }
}
main(){
	int t;cin>>t;
	while(t--){
		long long p=1e9+7;
		int n;cin>>n;
	long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long tich=a[0],u=a[0];
		for(int i=1;i<n;i++){
			tich=(tich*a[i])%p;
			u=ucln(u,a[i]);
		}
		long long kq=1;
		for(int i=0;i<u;i++){
			kq=(tich*kq)%p;
		}cout<<kq<<endl;
	}
}