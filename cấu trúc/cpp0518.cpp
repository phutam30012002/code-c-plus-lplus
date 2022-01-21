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
    int mnv;
    string name,gt,ns,diachi,mst,nkhd;
    string d,m,y;
};
int i=0;
struct NhanVien ds[50];
void nhap(NhanVien &ds)
{
    cin.ignore();
    ds.mnv=i+1;
    getline(cin ,ds.name);
    cin >> ds.gt; cin.ignore();
    cin >>ds.ns ;  
    for(int j=0;j<=1;j++) ds.m+=ds.ns[j];
    for(int j=3;j<=4;j++) ds.d+=ds.ns[j];
    for(int j=6;j<=9;j++) ds.y+=ds.ns[j];
    cin.ignore();
    getline(cin,ds.diachi);
    cin >> ds.mst ; cin.ignore();
    cin >>ds.nkhd ;
    i++;
}
void sapxep(NhanVien ds[],int n)
{
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(ds[j].y> ds[k].y)
            {
                swap(ds[j],ds[k]);
            }else if(ds[j].y==ds[k].y)
            {
                if(ds[j].m> ds[k].m)
                {
                    swap(ds[j],ds[k]);
                }else if(ds[j].m==ds[k].m)
                {
                    if(ds[j].d>ds[k].d)
                    {
                        swap(ds[j],ds[k]);
                    }
                }
            }
        }
    }
}
void inds(NhanVien ds[],int n)
{
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<5-scs(ds[j].mnv);k++)  cout <<"0";
        cout << ds[j].mnv <<" " << ds[j].name <<" " << ds[j].gt <<" ";
        cout << ds[j].ns <<" " << ds[j].diachi <<" " << ds[j].mst <<" " << ds[j].nkhd;
        cout <<"\n";
    }
}
int main()
{
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}