#include<bits/stdc++.h>
using namespace std;

struct monhoc{
    string mmh,tenmh;
    int sotc;
    double diemkt,diemthi,diemcc;
};
struct Sinhvien
{
    string msv,name,lop;
    struct monhoc b[20];
};
void inputmh(monhoc ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        getline(cin ,ds[i].mmh);
        getline(cin ,ds[i].tenmh);
        cin >> ds[i].sotc;
    }
}
void inputdmh(monhoc ds2[],int k)
{
    for(int i=0;i<k;i++)
    {
        cin >> ds2[i].sotc >> ds2[i].diemcc>> ds2[i].diemkt >> ds2[i].diemthi;
    }
}
void inputsv(Sinhvien ds[][100],int m,int k)
{
    for(int i=0;i<m;i++)
    {
        int x=0;
        cin >> ds[i][x++].msv;
        cin.ignore();
        getline(cin ,ds[i][x++].name);
        cin >> ds[i][x++].lop;
        for(int j=0;j<k;j++)
        {
            
        }
    }
}
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    Sinhvien ds[m];
    monhoc ds1[n];
    inputsv(ds,m,k);

}
