#include<bits/stdc++.h>
using namespace std;
main(){
    int dem=0;
    for(int i=100;i<=200;i++){
        if(i%6==0|| i%2==0|| i%4==0) dem++;
    }
    cout << dem;
}