/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s1,s2;
        getline(cin, s1);
        getline(cin ,s2);
        set<string> x;
        set<string> y;
        stringstream s11(s1);
        string token;
        while(s11 >> token)
        {
            x.insert(token);
        }
        stringstream s22(s2);
        while(s22 >> token)
        {
            y.insert(token);
        }
        for(auto i=x.begin();i!=x.end();i++)
        {
            int check=0;
            for(auto j=y.begin();j!=y.end();j++)
            {
               if(*i==*j)
               {
                   check=1;
               }
            }
            if(check==0) cout << *i <<" ";
        }
        cout <<"\n";
    }
}*/
#include <bits/stdc++.h>
using namespace std;

main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
	  string a,b;
	  getline(cin,a);
	   getline(cin,b);
	  set<string> A;
	  set<string> B;
	  stringstream sa(a);
	  stringstream sb(b);
	  string ta,tb;
	  while(sa>>ta){
	  	A.insert(ta);
	  }
	  while(sb>>tb){
	  	B.insert(tb);
	  }
	   for(string x:A){
	   cout<<x<<" ";}
	   cout<<endl;
	  
	  for(string x:B){
	   cout<<x<<" ";
	  }
	  cout<<endl;
}
}