#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    getchar();
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;
        bool check[1000] = {false};
        for(int i = 0; i < s.size(); i++) check[s[i]] = true;
         int dem = 0;
         for(int i = 'a'; i <= 'z'; i++) if(!check[i]) dem++;
          if(k >= dem) cout << 1; 
          else cout << 0; cout << "\n"; 
    }
    return 0;
}