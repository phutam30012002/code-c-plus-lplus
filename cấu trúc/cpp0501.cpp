#include<bits/stdc++.h>
using namespace std;
struct  Point
{
    double x,y;
};
void input(Point &a)
{
    cin >> a.x >> a.y;
}
double  distance(Point &A, Point &B)
{
    double a=(B.x-A.x)*(B.x-A.x);
    double b=(B.y-A.y)*(B.y-A.y);
    double z=sqrt(a+b);
    return z;
}
int main()
{
    struct Point A, B;
    int t;
    cin >> t;
    while(t--)
    {
        input(A) ;input (B);
        cout << fixed << setprecision(4) << distance(A,B) << endl ;
    }
    return 0;
}
