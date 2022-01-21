#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string a;cin>>a;
		int long vtri1=-1,vtri2=0;
		for(long i=a.size()-1;i>=0;i--){
			if(a[i]<a[i-1]){
				vtri1=i-1;
				break;
			}
		}
		for(long i=a.size()-1;i>vtri1;i--){
			if(a[i]<a[vtri1]&&a[i-1]!=a[i]){
				vtri2=i;break;
			}
		}
		if(vtri1==-1){ cout<<-1<<endl;
		}
		else{
		char k=a[vtri1];a[vtri1]=a[vtri2];a[vtri2]=k;
		if(a[0]=='0') cout<<-1<<endl;
		else cout<<a<<endl;
		}
	}
}