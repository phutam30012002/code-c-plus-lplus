#include<iostream>
#include<math.h>
using namespace std;
int   GCD(int a,int b)
{
	if(a>b) {int c=a;a=b;b=c;
	}for(int i=a;i>=0;i--){
		if(a%i==0&&b%i==0) 
		return i;
	}
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z,n;
        cin >> x >> y >> z >> n;
        int  a1 = GCD(x,y) ;
        long long  b1=x*y/a1;
        int  a2 = GCD(b1,z);
        long long b=z*b1/a2;
        long long m2=1;
        while(n>0)
        {
            m2*=10;
            n--;
        }
        long long m1=m2/10;
        int q=0;
        long long k1=m1/b;
        if(b>m2) cout<<-1<<endl;
       else if(k1*b<m1) cout<<(k1+1)*b<<endl;
       else cout<<k1*b<<endl;

	   }
       
          
       }