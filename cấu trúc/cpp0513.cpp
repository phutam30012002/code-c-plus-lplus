#include<bits/stdc++.h>
using namespace std;
struct SinhVien 
{
    string name,lop,ns;
    double gpa;
};
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
struct SinhVien ds[100];
void nhap(SinhVien ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin ,ds[i].name);
        cin >> ds[i].lop;
        cin.ignore();
        cin >> ds[i].ns;
        cin.ignore();
        cin >>ds[i].gpa;
    }
}

void in(SinhVien ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        int k=ds[i].ns.size();
        string s="";
        if(ds[i].ns[1]=='/')
        {
            s+='0';
            if(ds[i].ns[3]=='/')
            {
                for(int j=0;j<2;j++)
                {
                    s+=ds[i].ns[j];
                }
                s+='0';
                for(int j=2;j<k;j++)
                {
                    s+=ds[i].ns[j];
                }
            }
            if(ds[i].ns[4]=='/')
            {
                for(int j=0;j<k;j++)
                {
                    s+=ds[i].ns[j];
                }
            }
        }else if(ds[i].ns[4]=='/')
        {
            for(int j=0;j<3;j++) s+=ds[i].ns[j];
            s+='0';
            for(int j=3;j<k;j++) s+=ds[i].ns[j];
        }
        cout <<"B20DCCN";
        for(int j=0;j<3-scs(i+1);j++)   cout << "0";
        cout <<i+1 <<" " << ds[i].name <<" " <<ds[i].lop <<" "<<s <<" ";
        cout << fixed << setprecision(2) << ds[i].gpa;
        cout <<"\n";
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds,N);
    in(ds,N);
    return 0;
}