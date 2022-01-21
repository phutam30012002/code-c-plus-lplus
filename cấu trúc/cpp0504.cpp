#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string Msv="B20DCCN001";
    string name,lop,ns;
    float gpa;
};
void nhap(SinhVien &a)
{
    getline(cin , a.name);
    getline(cin ,a.lop);
    getline(cin ,a.ns);
    
    cin >> a.gpa;
}
/*void chuanhoa(string s)
{
    int a[100],j=0;
    string delimiter ="/";
    size_t pos= 0;
    string token;
    vector<string> s1;
    while((pos= s.find(delimiter))!= std ::string ::npos)
    {
        token =s.substr(0,pos);
        s1.push_back(token);
        s.erase(0,pos+delimiter.length());
    }
    for(int i=0;i<s1.size();i++)
    {
     
    }
}*/
void in(SinhVien a)
{ 
    int k = a.ns.size();
    string s = "";
    if (a.ns[1] == '/') 
    {
        s = "0";
        if (a.ns[3] == '/') {
            for (int i = 0;i < 2;i++) {
                s += a.ns[i];
            }
            s += "0";
            for (int i = 2;i < k;i++) {
                s += a.ns[i];
            }
        }
        if (a.ns[4] == '/') {
            for (int i = 0;i < k;i++) s += a.ns[i];
        }
    }
    else if (a.ns[4] == '/') {
        for (int i = 0;i < 3;i++) {
            s += a.ns[i];
        }
        s += "0";
        for (int i = 3;i < k;i++) {
            s += a.ns[i];
        }
    }
    cout << a.Msv <<" " << a.name <<" " << a.lop << " " << s << " ";
    cout << fixed << setprecision(2) << a.gpa ;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}