#include<bits/stdc++.h>
using namespace std;
int check(string a){
	if(a.size()>9) return 0;
	for(int i=0;i<a.size();i++){
		if(a[i]<'0'||a[i]>'9') return 0;
	}return 1;
}
int to_int(string a){
	int kq=0;
	for(int i=0;i<a.size();i++){
		kq=kq*10+(a[i]-'0');
	}return kq;
}
int main(){
	long tong=0;
	ifstream fp;
	fp.open("DATA.in");
	while(!fp.eof()){
		string x;
		fp>>x;
		if(check(x)==1){
			tong+=to_int(x);	
		}
	}
	cout<<tong;
}