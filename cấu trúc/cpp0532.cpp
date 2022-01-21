// #include<bits/stdc++.h>
// using namespace std;
// struct dt
// {
//     int x,y;
// };
// void input(dt ds[],int n,int a[],int b[])
// {
//     int k=0,l=0;
//     for(int i=0;i<n;i++)
//     {
//         cin >> ds[i].x >> ds[i].y;
//         a[k++]=ds[i].x;
//         b[l++]=ds[i].y;
//     }
// }
// double kq(int a[],int b[],int n)
// {
//     double  area;
//     int j=n-1;
//     for(int i=0;i<n;i++)
//     {

//         area +=(double)(a[j]+a[i])*(b[j]-b[i]);
//         j=i;
    
//     }
//     return abs((double)(area/2.0));
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         struct dt ds[n];
//         int a[1000],b[1000];
//         input(ds,n,a,b);
//         cout << fixed << setprecision(3) << kq(a,b,n) ;
//         cout << endl;
//     }
// }//polygon area formula from coordinates
#include<bits/stdc++.h>
using namespace std;
struct diem{
    double x, y;
};
double dt(diem a, diem b, diem c) {
    double t = abs((0.5*((c.x - a.x) * (b.y -a.y) - (b.x - a.x) * (c.y - a.y))));
    return t;
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        diem ds[n];
        double s = 0;
        for (int i = 0; i < n; i++) cin >> ds[i].x >> ds[i].y;
        for (int i = 1; i < n - 1; i++) s += dt(ds[0], ds[i], ds[i + 1]); 
        cout << fixed << setprecision(3) << s << "\n";
    }
}