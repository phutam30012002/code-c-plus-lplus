/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        int a[n][n],b[n*n],x=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> a[i][j];
                b[x++]=a[i][j];
            }
        }
        int dem =0;
        set<int> m;
        for(int i=0;i<n;i++)
        {
           if(b[i]!=-1)
           {
               for(int j=i+1;j<n;j++)
               {
                   if(b[i]==b[j])
                   {
                       b[j]=-1;
                   }
               }
           }
        }
        for(int i=0;i<n;i++)
        {
            if(b[i]!=-1)
            {
            int sum=1;
            int j=1;
            while(j<n)
            {
                int check=0;
                for(int k=n*j;k<n*(j+1);k++)
                {
                    if(b[i]==b[k])
                    {
                        check=1;
                    }
                }
                j++;
                if(check==1) sum++;
            }
            if(sum==n ) dem ++;
            }
        }
        cout << dem  <<"\n";
    }
}*/

#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
    int x=0;
	while(t--){
		int n;
		cin>>n;
	 	int a[n][n];
	   for(int i=0;i<n;i++){
	     for(int j=0;j<n;j++){
	     	cin>>a[i][j];
		 }
	   }
	   set<int> b;
	   set<int> c;
	   set<int> giao;
	   for(int i=0;i<n;i++){
	   	  b.insert(a[0][i]);
	   	  c.insert(a[1][i]);
	   }
	   for(int x:b){
	   	 if(c.find(x)!=c.end()) giao.insert(x);
	   }
	   for(int i=2;i<n;i++){
	   set<int> o;
	   	for(int j=0;j<n;j++){
	   		o.insert(a[i][j]);
		   }
		for(int x:giao){
			if(o.find(x)==o.end())   giao.erase(x);
		}
	      
	   }
		   cout<<giao.size()<<endl;
           for(int x:giao) cout << x << " ";
	}
}