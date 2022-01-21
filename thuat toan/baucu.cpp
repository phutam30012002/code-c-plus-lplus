#include <bits/stdc++.h>
using namespace std;
int main() {
   int n, m; cin >> n >> m;
   int a[n], dem[m + 1] = {0};
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      dem[a[i]]++;
   }
   int s1 = 0, s2 = 0, max1 = 0, max2 = 0;
   for (int i = 1; i <= m; i++) {
      if (max1 < dem[i]) {
         max1 = dem[i];
         s1 = i;
      }
   }
   for (int i = 1; i <= m; i++) {
      if (dem[i] != max1 && dem[i] > max2) {
         s2 = i;
         max2 = dem[i];
      }
   }
   if (s2 <= 1) cout << "NONE";
   else cout << s2;
}