#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv,name,lop,ns;
        float gpa;
    public:
        void nhap(){
            getline(cin, name);
            cin >> lop;cin.ignore();
            cin >> ns;
            cin >> gpa;
        }
        void chuanhoa()
        {
            if(ns[2]!='/') ns.insert(0,"0");
            if(ns[5]!='/') ns.insert(3,"0");
        }
        void xuat()
        {
            cout << "B20DCCN001" << " " << name << " " << lop <<" ";
            chuanhoa();
            cout << ns << " ";
            cout << fixed << setprecision(2) << gpa;
        }
        
};
main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}