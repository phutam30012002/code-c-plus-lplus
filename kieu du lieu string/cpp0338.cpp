
#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
	  string a;
	  cin>>a;
	  cin.ignore();
	  int k,kq=0;cin>>k;
	  for(int i=0;i<a.size();i++){
	  	int dem=0;
	  	set<char> s;
	  	for(int j=i;j<a.size();j++){
	  		s.insert(a[j]);
	  		if(s.size()==k) dem++;
	  		if(s.size()>k) break;
		  }
		  kq+=dem;
	  }
	 cout<<kq<<endl; 	
	}
}