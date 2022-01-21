#include<bits/stdc++.h>
using namespace std;

void input (int a[100][100],int n, int m)
{
    for(int i=0;i <n ;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j] ;
        }
    }
}
void output(int a[100][100],int n ,int m)
{
    for(int i=0;i <n ;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << a[i][j] << " ";
        }
    }
}
void out(int a[100][100],int n,int m)
{
    int d=n,k=m;
    int i=0,j=0;

    int x=0,y=1;
    while(i<d/2||j<k/2)
    {
    int temp =a[i][j]; // lay 1 o de tao cho trong dich chuyen
    // dich chuyen cot trai tu duoi len tren
    // VD N=4,M=5
    
    for(i,j=i;i<n-1;i++)
    {
        a[i][j]=a[i+1][j];//i tang tu 0-> 3 ,j=0
    }
    // dich chuyen hangf duoi tu phai qua trai
    for(j,i;j<m-1;j++)
    {
        a[i][j]=a[i][j+1];//i=3,j tawng tu 0-> 4;
    }
    // dich chuyen cot ben phai tu tren xuong duoi
    for(i , j; i>x ;i--)
    {
        a[i][j]=a[i-1][j]; // i==3->0;j=4;
    }
    // dich chuyen hang tren tu trai qua phai
    for(i,j;j>y;j--)
    {
        a[i][j]=a[i][j-1];// i=0,j=4->1;
    }
    a[i][j]=temp;
    i++;n--;m--;x++;y++;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int a[100][100];
        input(a,n,m);
        out(a,n,m);
        output(a,n,m);
        cout << "\n";
    }
}