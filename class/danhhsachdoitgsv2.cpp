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
        friend ostream& operator<< (ostream& s, SinhVien a){
            s << a.id << " " << a.getname() <<" " << a.lop <<" "<< a.ns <<" ";
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