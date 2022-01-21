/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<=n-k;i++)
    {
        int max=a[i];
        for(int j=i;j<i+k;j++)
        {
            if(a[j]>max) max=a[j];
        }
        cout  << max <<" ";
    }
    cout << endl;
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int &x:a) cin >> x;
        multiset<int > ms;
        for(int i=0;i<k;i++) ms.insert(a[i]);
        for(int i=k;i<n;i++)
        {
            cout << *ms.rbegin()<<" ";
            ms.erase(ms.find(a[i-k]));
            ms.insert(a[i]);
        }
        cout << *ms.rbegin();
        cout <<endl;
    }
}