#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        set <int > s;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
       std :: set<int> ::iterator it;
       for(int i=0;i<n;i++)
       {
           it=s.find(a[i]);
           if(*it!=*s.rbegin()) 
           {
               it++;
               cout << *it <<" ";
           }else 
           {
               cout <<"_" <<" ";
           }
       }
       cout << endl;
    }
}