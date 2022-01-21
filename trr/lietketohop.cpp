#include<bits/stdc++.h>
using namespace std;
int  n,x[100],k;
void in(int a[],int n)
{
	for(int i=1;i<=n;i++)
	cout<<a[i];
	cout<<" ";
}
void tohop(int i)
{
	for(int j=x[i - 1] + 1; j<=n-k+ i; j++)
	{
			x[i]=j;
			if(i==k) in(x,k);
			else tohop(i+1);
		
	}
}
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
    	cin>>n>>k;
        x[0]=0;
	tohop(1);
	cout<<"\n";
	}
    
}