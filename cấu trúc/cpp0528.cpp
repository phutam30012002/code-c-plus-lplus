#include<bits/stdc++.h>
using namespace std;
struct sinhvien
{
    int stt;
    string msv,name,lop,email,doanhnghiep;
};
void input(sinhvien ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        ds[i].stt=i+1;
        cin >> ds[i].msv;
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].lop;
        cin.ignore();
        cin >> ds[i].email;
        cin.ignore();
        cin >> ds[i].doanhnghiep;

    }
}
void xuli(sinhvien ds[] , string s,int n)
{
    sinhvien ds1[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(ds[i].doanhnghiep==s)
        {
            ds1[j++]=ds[i];
        }
    }
    for(int l=0;l<j-1;l++)
    {
        for(int k=l+1;k<j;k++)
        {
            if(ds1[l].name.compare(ds1[k].name)>0) swap(ds1[l],ds1[k]);
        }
    }
    for(int l=0;l<j;l++)
    {
        cout << ds1[l].stt <<" "<<ds1[l].msv<<" "<< ds1[l].name<<" ";
        cout << ds1[l].lop <<" "<<ds1[l].email<<" "<< ds1[l].doanhnghiep;
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    struct sinhvien ds[n];
    input(ds,n);
    int q;
    cin >> q;
    while(q--)
    {
        string dn;
        cin >> dn;
        xuli(ds,dn,n);
    }
    return 0;
}