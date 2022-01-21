#include<bits/stdc++.h>
using namespace std;
struct Cauthu
{
    string name;
    int sbt,db,sumbt;
};
void input(Cauthu ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        getline(cin, ds[i].name);
        cin >> ds[i].sbt >> ds[i].db;
        if(ds[i].db==1) ds[1].sumbt+=ds[i].sbt;
        if(ds[i].db==2) ds[2].sumbt+=ds[i].sbt;
        if(ds[i].db==3) ds[3].sumbt+=ds[i].sbt;

    }
}
void output(Cauthu ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << ds[i].name << " "<< ds[i].sbt << " " << ds[i].db;
    }
}
void yb(Cauthu ds[],int n){
    int max=ds[1].sumbt;
    int dbmax=1;
    for(int i=1;i<=3;i++)
    {
        if(ds[i].sumbt>max) 
        {
            max=ds[i].sumbt;
            dbmax=i;
        }
        cout << ds[i].sumbt <<" ";
    }
    cout << endl;
    cout << "Doi co tong ban thang max " << dbmax; 
    cout << endl;
}
void yc(Cauthu ds[],int n)
{
    
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(ds[i].sbt < ds[j].sbt) swap(ds[i],ds[j]);
       }
    }
    for(int i=0;i<3;i++)
    {
        cout << ds[i].name << " "<< ds[i].sbt << " " << ds[i].db;
    }
}
main()
{
    int n;
    cin >> n;
    cin.ignore();
    Cauthu ds[n];
    input(ds,n);
    output(ds,n);
    yb(ds,n);
    yc(ds,n);
}
#include <bits/stdc++.h>
using namespace std;
struct player{
	string HT;
	int SBT,D;
};
void nhap(player &a){
	cin.ignore();
	getline(cin,a.HT);
	cin>>a.SBT>>a.D;
}
void xuat(player a){
	cout<<a.HT<<" "<<a.SBT<<" "<<a.D<<endl;
}
bool sx_SBT(player a,player b){
	return a.SBT>b.SBT;
}
int max(int a,int b){
	if(a>b) return a;
	else return b;
}
int main(){
	int n;
	cin>>n;
	player ds[n];
	for(int i=0;i<n;i++) nhap(ds[i]);
	for(int i=0;i<n;i++) xuat(ds[i]);
///////////////////////////
  int D1=0,D2=0,D3=0;
    for(int i=0;i<n;i++){
    	if(ds[i].D==1) D1+=ds[i].SBT;
    	else if(ds[i].D==2) D2+=ds[i].SBT;
    	else D3+=ds[i].SBT;
	}
	int Dmax=max(max(D1,D2),D3);
	cout<<D1<<" "<<D2<<" "<<D3<<endl;
	cout<<Dmax<<endl;
//////////////////////
  sort(ds,ds+n,sx_SBT);
  for(int i=0;i<3;i++){
  	xuat(ds[i]);
  }
}