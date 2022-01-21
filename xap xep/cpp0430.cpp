 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int t;
     cin >> t;
     while(t--)
     {
         int n;
         cin >> n;
         int a[n],b[n];
         for(int i=0;i<n;i++)
         {
             cin >> a[i];
             b[i]=1;
         }
         sort(a,a+n);
         int x=n;
         for(int i=0;i<n;i++)
         {
             if(b[i]==1)
             {
                 for(int j=i+1;j<n;j++)
                 {
                     if(a[i]==a[j])
                     {
                         b[j]=0;
                         x--;
                     }
                 }
             }
         }
         int m=a[n-1]-a[0];
         cout << m-x+1 <<"\n";
     }
 }
