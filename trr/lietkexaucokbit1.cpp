#include<iostream>
using namespace std;
int a[100];
int n,k, dem=0;
void check(int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=j;
		if(i==n)
		{
			int dem=0;
			for(int l=1;l<=n;l++)
			{
				if(a[l]==1) dem++;
				if(dem==k)
				{
					for(int l=1;l<=n;l++)
					cout<<a[l];
					
					cout<<"\n";
				}
			}
		}
		else check(i+1);
	}
}
int main()
{
	cin>>n>>k;
	check(1);
	
}