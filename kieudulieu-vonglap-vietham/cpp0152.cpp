#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,m,dem=1;
        cin >>a >> m;
        for(int i=0;i<=m-1;i++)
        {
            if((a*i)%m==1)
            {
                cout <<i<<"\n";
                dem =0;
                break;
            }
        }
        if(dem==1) cout <<"-1\n";
    }
}