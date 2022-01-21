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
struct NhanVien 
{
   
    string name,sex,birthdate,address,mst,nkhd;
};
struct NhanVien ds[50];
void nhap(NhanVien &a)
{
    scanf("\n");
    getline(cin , a.name);
    getline (cin ,a.sex);
    getline (cin ,a.birthdate);
    getline(cin ,a.address);
    getline(cin ,a.mst);
    getline(cin ,a.nkhd);
    
}
void inds(NhanVien ds[],int N)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<5-scs(i+1);j++) cout << "0";

        cout << i+1 <<" " <<ds[i].name <<" "<<ds[i].sex <<" "<<ds[i].birthdate <<" " << ds[i].address <<" " <<ds[i].mst <<" "<< ds[i].nkhd<<endl;
    }

}
int main()
{
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) 
    {
       
        nhap(ds[i]);
    }
    inds(ds,N);
    return 0;

}