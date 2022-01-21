#include<iostream>
using namespace std;
int n,m,k;
int a[100]; 
int check(int i) 
{
	for(int j=0;j<=1;j++)
	{
		int dem0=0,dem1=0;
		a[i]=j;
		if(i==n)
		{
			for(int l=1;l<=n;l++)
			{
				if(a[l]==1) dem1++;
				if(a[l]==0) dem0++;
			}
			if(dem0==k||dem1==m)
			{
				for(int l=1;l<=n;l++)
				cout<<a[l];
				cout<<"\n";
			}
		}
		else check(i+1);
	}
}
int main()
{
	cin>>n>>k>>m;
	check(1);
}