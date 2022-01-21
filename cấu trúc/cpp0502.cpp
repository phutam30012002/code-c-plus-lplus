#include<bits/stdc++.h>
using namespace std;
struct ThiSinh 
{
    string name;
    string ns;
    float d1,d2,d3,tong;
};
void nhap(ThiSinh &a)
{
    getline(cin ,a.name);
    cin >> a.ns;
    cin >> a.d1 >>a.d2 >>a.d3;
    a.tong=a.d1+a.d2+a.d3;
}
void in(ThiSinh a)
{
    cout << a.name <<" ";
    cout <<a.ns << " "<<fixed <<setprecision(1) << a.tong;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}