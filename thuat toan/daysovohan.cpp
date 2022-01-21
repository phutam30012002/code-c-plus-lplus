#include <bits/stdc++.h>
using namespace std;
int deQuy(long long n, long long k){
	long long a = pow(2, n - 1);
	if(k == 2 && n == 1) return 1;
	if(k == 1 && n == 1) return 0;
	if(k > a) k = 2 * a - k;
	if(k == a) return n - 1;
	return deQuy(n - 1, a - k);
}

int main(){
	int t; cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		cout << deQuy(n,k) + 1 << endl;
	}
}