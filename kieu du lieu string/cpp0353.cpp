#include<bits/stdc++.h>
using namespace std;
int kt(string s)
{
    string s1=s;
    reverse(s.begin(),s.end());
    if(s1==s) return 1;
    return 0;
}
string kiemtra(string s)
{
    string s1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65&&s[i]<=67) {s1+='2';  }
       else  if(s[i]>=68&&s[i]<=70) {s1+='3';}
       else  if(s[i]>=71&&s[i]<=73) {s1+='4'; }
       else  if(s[i]>=74&&s[i]<=76) {s1+='5';}
       else  if(s[i]>=77&&s[i]<=79) {s1+='6';}
       else  if(s[i]>=80&&s[i]<=83) {s1+='7';}
       else  if(s[i]>=84&&s[i]<=86) {s1+='8';}
       else  if(s[i]>=87&&s[i]<=90) { s1+='9';}
    }
    return s1;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
    string  s;
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&& s[i]<='z')  s[i]-=32;
    }
       string s2=kiemtra(s);
      // cout << s2 <<" ";
       if(kt(s2)==1) cout <<"YES\n";
       else cout <<"NO\n";
    }
}
/*#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		string a;
		cin>>a;
		int b[a.size()];
		for(int i=0;i<a.size();i++){
			if(a[i]>='A'&&a[i]<='Z') {
			a[i]+=32;}
		}
		int x=0;
		for(int i=0;i<a.size();i++){
			 x=a[i]-'a';
			if(x<3) b[i]=2;
			else if(x>=3&&x<6) b[i]=3;
			else if(x>=6&&x<9) b[i]=4;
			else if(x>=9&&x<12) b[i]=5;
			else if(x>=12&&x<15) b[i]=6;
			else if(x>=15&&x<19) b[i]=7;
			else if(x>=19&&x<22) b[i]=8;
			else  b[i]=9;	
		}
		int k=0,p=a.size()-1,kq=1;
   while(k<=p){
   	if(b[k]!=b[p]) {
   		kq=0;break;
	   }
	   k++;p--;
   }
   if(kq==0) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
	}
}*/