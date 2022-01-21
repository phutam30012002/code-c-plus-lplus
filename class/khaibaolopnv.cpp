#include<bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
         string name,gt,ns,diachi,mst,nkhd;
    public:
        void nhap(){
           
            getline(cin ,name);
            cin >> gt; 
            cin >> ns;cin.ignore();
            getline(cin , diachi);
            cin >> mst;
            cin>> nkhd; 
        }
        void xuat(){
            cout << "00001" <<" " << name << " " << gt << " " << ns <<" ";
            cout <<  diachi <<" " << mst << " " << nkhd;
        }
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// class NhanVien{
// 	private:
// 	string id="00001",name,sex,ns,dc,thue,nk;
// 	public:
// 		friend istream& operator >> (istream& in,NhanVien &a);
// 		friend ostream& operator <<(ostream& out,NhanVien a);
// };

// istream& operator >> (istream& in,NhanVien &a){
// 	getline(in,a.name);
// 	in>>a.sex>>a.ns;
// 	in.ignore();
// 	getline(in,a.dc);
// 	in>>a.thue>>a.nk;
// 	return in;
// }
// ostream& operator << (ostream& out,NhanVien a){
// 	out<<a.id<<" "<<a.name<<" "<<a.sex<<" "<<a.ns<<" "<<a.dc<<" "<<a.thue<<" "<<a.nk;
// 	return out;
// }
// #define a() a;
// int main(){
//     NhanVien a();
//     cin >> a;
//     cout << a;
//     return 0;
// }