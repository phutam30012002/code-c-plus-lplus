#include<bits/stdc++.h>
using namespace std;
struct tuoi
{
    string name,ns;
    int  d,m,y;
};
struct tuoi ds[100];
void input (tuoi ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >> ds[i].name >> ds[i].ns; 
        string e="",r="",t="";
        for(int j=0;j<=1;j++) e+=ds[i].ns[j];
        for(int j=3;j<=4;j++) r+=ds[i].ns[j];
        for(int j=6;j<=9;j++) t+=ds[i].ns[j];
        ds[i].d=stoi(e);
        ds[i].m=stoi(r);
        ds[i].y=stoi(t);

    }
}
void xl(tuoi ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ds[i].y< ds[j].y)
            {
                swap(ds[i],ds[j]);
            }else if(ds[i].y==ds[j].y)
            {
                if(ds[i].m< ds[j].m)
                {
                    swap(ds[i],ds[j]);
                }else if(ds[i].m==ds[j].m)
                {
                    if(ds[i].d< ds[j].d)
                    {
                        swap(ds[i],ds[j]);
                    }
                }
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    struct tuoi ds[n];
    input(ds,n);
    xl(ds,n);
  /*  for(int i=0;i<n;i++)
    {
        cout  << ds[i].name <<" " << ds[i].ns;
    }*/
    cout << ds[0].name <<"\n";
    cout << ds[n-1].name ;

}
