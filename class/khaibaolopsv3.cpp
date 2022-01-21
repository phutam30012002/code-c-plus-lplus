#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string name , lop ,ns;
        float gpa;
    public:
        void chuanhoa(){
            if(ns[2]!='/') ns.insert(0,"0");
            if(ns[5]!='/') ns.insert(3,"0");
        }
        void setns(string ns)
        {
            this -> ns=ns;
        }
        string getns(){
            chuanhoa();
            return ns;
        }
        void setname(string name){
            this -> name=name;
        }
        string getname(){
            string token;
            stringstream ss(name);
            string s1;
            while(ss >> token){
                token[0]=toupper(token[0]);
                for(int i=1;i<token.size();i++) token[i]=tolower(token[i]);
                s1= s1+token;
                s1=s1+" ";
            }
            return s1;
        }
        friend istream& operator>> (istream& s,SinhVien& a){
            getline(cin , a.name);
            s >> a.lop >> a.ns >> a.gpa;
            return s;
        }
        friend ostream& operator<< (ostream & s, SinhVien &a){
            s << "B20DCCN001" <<" " << a.getname()  << a.lop <<" " << a.getns()<< " ";
            s << fixed << setprecision(2) << a.gpa;
            return s;
        } 
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// class SinhVien {
//    public:
//       string ten, lop, ns;
//       double gpa;
//       friend istream& operator>> (istream &is, SinhVien &sv) {
//          getline(is, sv.ten);
//          is >> sv.lop >> sv.ns >> sv.gpa;
//          return is;
//       }
//       friend ostream& operator<< (ostream &os, SinhVien &sv) {
//          for (int i = 0; i < sv.ten.size(); i++) {
//              if (i == 0 || sv.ten[i - 1] == ' ') 
//                  sv.ten[i] = toupper(sv.ten[i]);
//              else sv.ten[i] = tolower(sv.ten[i]);
//          }
//          if (sv.ns[2] != '/') sv.ns.insert(0, "0");
//          if (sv.ns[5] != '/') sv.ns.insert(3, "0");
//          return os << "B20DCCN001 " << sv.ten << " " << sv.lop << " " << sv.ns << " " << fixed << setprecision(2) << sv.gpa;
//       }
// };
// int main(){
//     SinhVien a;
//     cin >> a;
//     cout << a;
//     return 0;