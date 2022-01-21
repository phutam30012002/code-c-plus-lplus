#include<bits/stdc++.h>
using namespace std;
struct SinhVien 
{
    string msv,name,lop;
    double thcs2,tbcpls,diemtb;
};
void input(SinhVien ds[],int n, ifstream & fb1)
{
    for(int i=0;i<n;i++)
    {
        fb1.ignore();
        fb1 >> ds[i].msv;
        fb1.ignore();
        getline(fb1 ,ds[i].name);
        fb1 >> ds[i].lop;
        fb1 >> ds[i].thcs2 >> ds[i].tbcpls;
        ds[i].diemtb=ds[i].thcs2+ds[i].tbcpls;
    }
    
}
void output(SinhVien ds[],int n, ofstream &fb2)
{
    for(int i=0;i<n;i++)
    {
        if(ds[i].tbcpls >=7.0)
        {
            fb2 << ds[i].msv <<" " <<ds[i].name << " "<< ds[i].lop<<" ";
            fb2 << fixed << setprecision(2) << ds[i].thcs2 <<" "<< ds[i].tbcpls;
            fb2 << endl; 
        }
    }
}
void output2( SinhVien ds[],int n, ofstream &fb2)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ds[i].name >ds[j].name)
            {
                swap(ds[i],ds[j]);
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        fb2 << ds[i].msv <<" " <<ds[i].name << " "<< ds[i].lop<<" ";
        fb2 << fixed << setprecision(2) << ds[i].thcs2 <<" "<< ds[i].tbcpls;
        fb2 << endl; 
    }
}
void output3(SinhVien ds[],int n, ofstream &fb2)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ds[i].diemtb >ds[j].diemtb)
            {
                swap(ds[i],ds[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        fb2 << ds[i].msv <<" " <<ds[i].name << " "<< ds[i].lop<<" ";
        fb2 << fixed << setprecision(2) << ds[i].thcs2 <<" "<< ds[i].tbcpls;
        fb2 << endl; 
    }
}
int main()
{
    ifstream fb1;
    ofstream fb2;
    fb1.open("ptit.in");
    fb1.open("PTIT.out");
    int n;
    fb1 >> n;
    struct SinhVien ds[n];
    input(ds,n, fb1);
    output(ds,n, fb2);
    fb1.close();
    fb2.close();

   // output2(ds,n);
   // output3(ds,n);

}
