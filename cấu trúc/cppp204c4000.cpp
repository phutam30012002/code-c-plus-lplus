
#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string name ,lop,ns;
    double gpa;
};
void nhapThongTinSV( SinhVien &a)
{
    getline(cin ,a.name);
    cin >> a.lop;
    cin.ignore();
    cin >> a.ns;
    cin >> a.gpa;
}
void ch(SinhVien &a)
{
    if(a.ns[2]!='/') a.ns.insert(0,"0");
    if(a.ns[5]!='/') a.ns.insert(3,"0");
}
void inThongTinSV(SinhVien a)
{
    cout << "N20DCCN001" << "\t" << a.name << "\t" << a.lop <<"\t";
    ch(a);
    cout << a.ns <<"\t";
    cout << fixed << setprecision(2) << a.gpa ; 
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}