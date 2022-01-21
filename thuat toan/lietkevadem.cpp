// #include<bits/stdc++.h>
// using namespace std;
// int nt (int n)
// {
//     if(n <  2 ) return 0;
//     for(int i=2;i<=sqrt(n);i++) 
//     if( n%i==0) return 0;
//     return 1;
// }
// int main()
// {
//     int n;
//     map <int ,int > mp;
//     int dem=0;
//     while(cin >> n)
//     {
//         if( nt(n)==1)
//         {
//             mp[n]++;
//             dem++;
//         }
//         if (dem==10) break;
//     }
    
// }
#include <bits/stdc++.h>
using namespace std;
int a[10] = {0}, b[50000], dem[50000] = {0}, k = 0;
void check(int n) {
   int x = n;
   while (x > 0) {
      if (a[x % 10]) return;
      x /= 10;
   }
   for (int i = 0; i < k; i++) {
      if (n == b[i]) {
         dem[i]++;
         return;
      }
   }
   b[k] = n;
   dem[k++]++;
}
int main() {
   a[0] = a[1] = 1;
   for (int i = 2; i <= 4; i++) {
      if (!a[i]) {
         for (int j = i * i; j < 10; j += i) a[j] = 1;
      }
   }
   int x;
   while (cin >> x) {
      check(x);
   }
   for (int i = 0; i < k; i++) cout << b[i] << " " << dem[i] << "\n";
}