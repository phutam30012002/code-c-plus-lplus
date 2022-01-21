// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         set<int> v;
//         int dem=0;
//         for(int i=0;i<n;i++) 
//         {
//             cin >> a[i];
//             int x= log(a[i])/log(2);
//             v.insert(x);
//             a[i]-=pow(2,x);
//             dem+=a[i];
//         }
//         int max=0;
//         for(auto z:v)
//         {
//             if(z> max) max=z;
//         }
//         cout << dem +n+max <<"\n";
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int &x:a) cin >>x;
        int dem=0,mx=0;
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            int x=a[i];
            while(x>0)
            {
                if(x%2==0)
                {
                    x/=2;
                    cnt++;
                }
                if(x%2==1)
                {
                    x-=1;
                    dem++;
                }
            }
            mx=max(mx,cnt);
        }
        cout << mx+dem << endl;
    }
}