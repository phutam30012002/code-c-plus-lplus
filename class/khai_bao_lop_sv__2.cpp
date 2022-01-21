#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string name , lop, ns;
        double gpa;
    public:
    void chuanhoa()
        {
            if(ns[2]!='/') ns.insert(0,"0");
            if(ns[5]!='/') ns.insert(3,"0");
        }
    string getns()
        {
            chuanhoa();
            return ns  ;
        }
        void setid(string ns){
            this ->ns =ns;
        }
    
    friend ostream & operator<< (ostream& s ,  SinhVien& a )
    { 
        
        s  <<"B20DCCN001"<<" " << a.name << " "<< a.lop << " "<< a.getns() <<" ";
        s << fixed << setprecision(2) << a.gpa;
        return s;
    }
    friend istream& operator>> (istream& s, SinhVien& a){
        getline(cin, a.name);
        s >> a.lop >> a.ns >> a.gpa;
        return s;
    }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
