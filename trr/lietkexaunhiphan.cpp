#include<bits/stdc++.h>
using namespace std;
void nhiphan(int a[],int n)
{
	int i=n-1;
	while(a[i]==1&&i>0)
	{
		a[i]=0;
		i=i-1;
	}
	a[i]=1;
}
void in(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i];
	cout<<" ";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		a[i]=0;
		for(int i=0;i<pow(2,n);i++){
			in(a,n);
		nhiphan(a,n);
		
	}
	cout<<"\n";
		
	}
}