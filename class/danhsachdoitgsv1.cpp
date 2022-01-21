#include<bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
        string id,name,lop,ns;
        float gpa;
        static int dem;
    public:
        friend istream& operator>>(istream& s, SinhVien & a){
            a.id="B20DCCN";
            for(int i=0;i<3-to_string(a.dem).size();i++) a.id+="0";
            a.id+=to_string(a.dem);
            a.dem++;
            s.ignore();
            getline(cin , a.name);
            s >> a.lop >> a.ns;
            if(a.ns[2]!='/') a.ns.insert(0,"0");
	        if(a.ns[5]!='/') a.ns.insert(3,"0");
            s >> a.gpa;
            return s;
        }
        friend ostream& operator<< (ostream& s, SinhVien a){
            s << a.id << " " << a.name<<" " << a.lop <<" "<< a.ns <<" ";
            s << fixed << setprecision(2) << a.gpa << endl;
            return s;
        }
};
int SinhVien:: dem=1;
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// class SinhVien{
// 	private:
// 	string id,name,lop,ns;
// 	float GPA;
// 	 static int dem;
// 	public:
// 		SinhVien();
// 		friend istream& operator >> (istream &in,SinhVien &a);
// 		friend ostream& operator << (ostream &out,SinhVien a);
// };

// SinhVien::SinhVien(){
// 	id="";
// 	name="";
// 	lop="";
// 	GPA=0;
// 	ns="";
// }
//  istream& operator >>(istream &in,SinhVien &a){
// 	a.id="B20DCCN";
// 	for(int i=0;i<3-to_string(a.dem).size();i++) a.id+="0";
// 	a.id+=to_string(a.dem);
// 	a.dem++;
// 	in.ignore();
// 	getline(cin,a.name);
// 	in>>a.lop>>a.ns>>a.GPA;
// 	if(a.ns[2]!='/') a.ns.insert(0,"0");
// 	if(a.ns[5]!='/') a.ns.insert(3,"0");
// 	return in;
// }
//  ostream& operator <<(ostream &out,SinhVien a){
// 	out<<a.id<<" "<<a.name<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.GPA<<endl;
// 	return out;
// }
// int SinhVien::dem=1;
// int main(){
//     SinhVien ds[50];
//     int N, i;
//     cin >> N;
//     for(i=0;i<N;i++){
//         cin >> ds[i];
//     }
//     for(i=0;i<N;i++){
//         cout << ds[i];
//     }
//     return 0;
// }