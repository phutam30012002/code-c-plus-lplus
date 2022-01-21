// #include<bits/stdc++.h>
// using namespace std;
// int nt(int n)
// {
//     if(n<2) return 0;
//     for(int i=2;i<=sqrt(n);i++)
//     {
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i=0;i<n;i++) cin >> a[i];
//         sort(a,a+n,greater<int>());
//         for(int i=0;i<n;i++)
//         {

//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;
// string Ab[26] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "V", "X", "Y", "Z"};
bool SoSanh(int x, int y) {
    return x > y;
}
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n;
        int a[n + 1], x[10000] = {0}, stop = 0, y[10000];
        for (int i = 1; i <= n; i++) cin >> a[i];
        // for (int i = 1; i <= n; i++) x[i] = i;
        sort(a + 1, a + n + 1, SoSanh);
        while (1) {
            int l, sum = 0;
            for (int i = 1; i <= n; i++) 
                if (x[i] != 0) sum += a[i];
            if (isPrime(sum) == 1) {
                for (int i = 1; i <= n; i++) 
                    if (x[i] == 1) cout << a[i] << " ";
                cout << endl;
            }
            for (l = n; l > 0; l--)  if (x[l] == 0) break;
            if (l == 0) break;
            for (int i = 1; i <= l; i++) y[i] = x[i];
            for (int i = l; i <= n; i++) y[i] = 1 - x[i];
            for (int i = 0; i <= n; i++) x[i] = y[i];
        }
    }
}
// Cho dãy số A[] có N phần tử là các số nguyên dương khác nhau từng đôi một. Hãy sắp xếp dãy theo thứ tự giảm dần, sau đó liệt kê tất cả các dãy con của A[] có tổng các phần tử là số nguyên tố.

// Input

// Dòng đầu ghi số bộ test, mỗi test có 2 dòng:

// Dòng đầu ghi số N (2 < N <15)
// Dòng thứ 2 ghi N số của dãy A[], các số đều nguyên dương, nhỏ hơn 100 và khác nhau từng đôi một.
// Output

// Với mỗi test, liệt kê tất cả các dãy con có tổng các phần tử là số nguyên tố theo, mỗi dãy con trên một dòng. 

// Ví dụ

// Input

// Output

// 1

// 4

// 3 2 5 4

// 2

// 3

// 3 2

// 4 3

// 5

// 5 2

// 5 4 2