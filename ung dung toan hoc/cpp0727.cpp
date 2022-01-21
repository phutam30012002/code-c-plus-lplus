/*#include<bits/stdc++.h>
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
        for(int i=0;i<n;i++) cin >> a[i];
        int *il=max_element(a,a+n);
        //cout << *il << " " <<(int)il <<" ";
        int max=*il;
        for(int i=0;i<n;i++)
        {
            int sum=a[i];
            for(int j=i+2;j<n;j+=2)
            {
                sum+=a[j];
            }
            if(sum > max ) max=sum;
        }
        cout << max << "\n";
    }
}*/
#include <bits/stdc++.h>
using namespace std;
long long FindMaxSum(int arr[], int n)
{
    long long incl = arr[0];
    long long excl = 0;
    long long excl_new;
    int i;
    for (i = 1; i < n; i++)
    {
        excl_new = (incl > excl) ? incl : excl;
        incl = excl + arr[i];
        excl = excl_new;
    }
    return ((incl > excl) ? incl : excl);
}
 int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        cout << FindMaxSum(a,n) <<"\n";
    }

}