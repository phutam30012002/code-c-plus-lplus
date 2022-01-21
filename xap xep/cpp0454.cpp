/*#include<bits/stdc++.h>
using namespace std;
bool check(long long a[], int  n)
{
    for (int  i = 0; i < n; i++)
        a[i] = a[i] * a[i];
    sort(a, a + n);
 
    for (int  i = n - 1; i >= 2; i--) {
        int l = 0; 
        int r = i - 1; 
        while (l < r) {
            
            if (a[l] + a[r] == a[i])
                return true;
            (a[l] + a[r] < a[i]) ? l++ : r--;
        }
    }
    return false;
}
int  main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        check(a, n) ? cout << "YES\n" : cout << "NO\n";
        
    }
    return 0;
}*/
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
        set<long long > A;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            a[i]*=a[i];
            A.insert(a[i]);
        }
        for(int i=0;i<n;i++)
        {
            long long t=a[i]
        }
    }
}