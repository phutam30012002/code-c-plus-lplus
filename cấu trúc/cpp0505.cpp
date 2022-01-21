#include<bits/stdc++.h>
using namespace std;
struct  NhanVien
{
    string name,gt,ns,diachi,mst,nkhd;
    string mnv="00001";
};
void nhap(NhanVien &a)
{
    getline(cin ,a.name);
    getline(cin ,a.gt);
    getline(cin ,a.ns);
    getline (cin ,a.diachi);
    getline(cin ,a.mst);
    getline (cin ,a.nkhd);
}
void in (NhanVien a)
{
    cout << a.mnv <<" " << a.name << " " <<a.gt << " " << a.ns << " "  << a.diachi << " " << a.mst << " " << a.nkhd ;
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}