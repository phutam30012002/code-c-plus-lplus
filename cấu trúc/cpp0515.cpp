#include<bits/stdc++.h>
using namespace std;
int scs(int n)
{
    int x=0;
    while(n>0)
    {
        x++;
        n/=10;
    }
    return x;
}
struct SinhVien
{
    int msv;
    string name,ns,lop;
    double gpa;
};
void nhap(SinhVien ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        ds[i].msv=i+1;
        getline(cin , ds[i].name);
        cin >> ds[i].lop;
        cin.ignore();
        cin >> ds[i].ns;
        cin >> ds[i].gpa;
    }
}
void  chname(SinhVien a)
{
    
        for(int j=0;j<a.name.size();j++)
        {
           a.name[j]=towlower(a.name[j]);
        }
        string token;
        stringstream s1(a.name);
        vector<string> ss;
        while( s1 >> token)
        {
            token[0]-=32;
            ss.push_back(token);
        }
        for(string x : ss) cout << x <<" ";
}
void chns(SinhVien a)
{
    int k=a.ns.size();
    string s;
    if(k==10) { s=a.ns;}
    else if (k!=10)
    {
        s="";
        if(a.ns[1]=='/')
        {
            s+='0';
            if(a.ns[3]=='/')
            {
                for(int j=0;j<2;j++)  s+=a.ns[j];
                s+='0';
                for(int j=2;j<k;j++)   s+=a.ns[j];
            }else if(a.ns[4]=='/')
            {
                for(int j=0;j<k;j++) s+=a.ns[j];
            }
        }else if(a.ns[4]=='/')
        {
            for(int j=0;j<3;j++) s+=a.ns[j];
            s+='0';
            for(int j=3;j<k;j++) s+=a.ns[j];
        }
    }
    cout << s <<" ";
} 
void sapxep(SinhVien ds[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ds[i].gpa <ds[j].gpa)
            {
                swap(ds[j],ds[i]);
            }
        }
    }
}  
void in(SinhVien ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout <<"B20DCCN";
        for(int j=0;j< 3-scs(ds[i].msv);j++) cout <<"0";
        cout << ds[i].msv <<" ";
        chname(ds[i]);
        cout << ds[i].lop <<" ";
        chns(ds[i]);
        cout << fixed << setprecision(2) << ds[i].gpa;
        cout << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}