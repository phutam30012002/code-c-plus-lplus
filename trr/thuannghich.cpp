#include<bits/stdc++.h>
using namespace std;
int tn(int n){
    int a=n,b=0,sum=0;
    while(n>0){
        int x=n%10;
        b=b*10+x;
        sum+=x;
        n/=10;
    }
    if(a==b && sum==17) return 1;
    return 0;
}
main(){
    int n,x,y;
    cin >> n;
    x=pow(10,n-1);
    y=pow(10,n);
    int dem=0;
    for(int i=x;i < y;i++) {
        if(tn(i)==1) {
            dem++;
           // cout << i << " ";
        }
    }
    cout << dem ;
}