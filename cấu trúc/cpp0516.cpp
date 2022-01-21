#include<bits/stdc++.h>
using namespace std;
struct  mathang
{
    int mmh;
    string  name,nh;
    double gm,gb;
    double ln;
};
//struct mathang ds[100];
void input(mathang ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        ds[i].mmh=i+1;
        cin.ignore();
        getline(cin , ds[i].name);
    
        getline(cin ,ds[i].nh);
       
        cin >> ds[i].gm >> ds[i].gb;
        ds[i].ln=ds[i].gb-ds[i].gm;
    }
}
void xl(mathang ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(ds[i].ln < ds[j].ln)
           {
                swap(ds[i],ds[j]);
           }
        }
    }
}
void output(mathang ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << ds[i].mmh <<" " << ds[i].name <<" "<< ds[i].nh <<" ";
        cout <<fixed << setprecision(2) << ds[i].ln;
        cout << "\n";
    }
}
int main()
{
    struct mathang ds[100];
    int n;
    cin >> n;
    input(ds,n);
    xl(ds,n);
    output(ds,n);
    return 0;
}