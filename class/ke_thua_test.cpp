#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv,name, lop;
        int tuoi;
        float dtb;
    public:
        friend istream& operator>> (istream& s, SinhVien& a){
            s>> a.msv;
            s.ignore();
            getline(cin, a.name);
            s >> a.tuoi >> a.lop >> a.dtb;
            return s;
        }
        friend ostream& operator<< (ostream& s ,SinhVien a){
            if(a.dtb>= 8){
                s << a.msv <<" " << a.name << " "<< a.tuoi << " " << a.lop << " "<<  a.dtb<< endl;
                return s;
            }
        }
};
class GiangVien{
    private:
        string msv;
};
main(){
    SinhVien ds[50];
    int n;
    cin >> n;
    for(int i=0;i < n;i++)  cin >> ds[i];
    for(int i=0;i < n; i++) cout << ds[i];
    return 0;
}