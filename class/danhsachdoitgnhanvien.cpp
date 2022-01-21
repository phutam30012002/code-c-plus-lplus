#include<bits/stdc++.h>
using namespace std;
class NhanVien {
    private:

        string id,name ,gt, ns,diachi,mst,nkhd;
        static int dem;
    public:
        friend istream& operator>> (istream & s, NhanVien &a){
            for(int i=0;i<5-to_string(a.dem).size();i++) a.id+="0";
            a.id+=to_string(a.dem);
            a.dem++;
            s.ignore();
            getline(cin, a.name);
            s >> a.gt >> a.ns;
            s.ignore();
            getline(cin, a.diachi);
            s >> a.mst >> a.nkhd;
            return s;
        }
        friend ostream& operator<< (ostream& s, NhanVien a){
            s << a.id <<" "<< a.name << " " << a.gt <<" " << a.ns;
            s <<" " << a.diachi <<" " << a.mst << " " << a.nkhd<< endl;
            return s;
        }
};
int NhanVien:: dem=1;
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
