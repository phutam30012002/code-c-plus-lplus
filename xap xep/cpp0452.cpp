#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		long long n1,n2,n3;
		cin>>n1>>n2>>n3;
	long long a[n1],b[n2],c[n3];
    multiset<long long > A;
	multiset<long long> B;
	multiset<long long> C;
	multiset<long long> kq;
    multiset<long long > E;
		for(long long i=0;i<n1;i++){
			cin>>a[i];
            A.insert(a[i]);
		}
		for(long long i=0;i<n2;i++){
			cin>>b[i];
		B.insert(b[i]);
		}
		for(long long i=0;i<n3;i++){
			cin>>c[i];
			C.insert(c[i]);
		
		}
	for(long long y:B){
		if(A.count(y)!=0) 
        {
            kq.insert(y);
            B.erase(y);
            A.erase(y);
        }
	}
	int dem=0;
	for(long long x:kq){
		if(C.count(x)!=0) 
        {
            cout << x <<" ";
        kq.erase(x);
        C.erase(x);
		dem++;
        }
	}
	if(dem==0) cout<<-1;
	cout<<endl;
	}
}
