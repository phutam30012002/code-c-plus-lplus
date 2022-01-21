// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while(t--)
// //     {
// //         int n,k;
// //         cin >> n >>k;
// //         int a[n];
// //         for(int i=0;i<n;i++) cin >>a[i];
// //         sort (a,a+n);

// //     }
// // }
// #include<bits/stdc++.h>
// using namespace std;

// void generate_next_combination(int A[],int B[], int n, int k){
//     int i = k - 1;
//     // xet tu cuoi day ve dau day xem dk cua a[i]
//     while (A[i] == B[i+1])
//     {
//         i = i - 1;
//     }
//     // neu a[i] != n-m+i +1 
//     A[i] = B[i+1];

//     // Xet cac phan tu phia sau 
//     // for(int j=i+1; j < k ; j++){
//     //     A[j] = A[i] + j - i ;
//     // }
//     // // sleep(3);
    
// }

// void xuat(int A[], int n) {
//     for (int i = 0; i < n; i++)
//         cout << A[i] <<" ";
//     cout << endl;
// }

// int giaiThua(int n)
// {
//     if (n == 1)
//         return 1;
//     return n * giaiThua(n - 1);
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--)
//     {
//             int n,k;
//     cin >> n >> k;
//     int B[n];
//     for(int i = 0; i < n; i ++) cin >> B[i];
//     sort(B,B+n);
//     int A[k];
//     for(int i=0;i<k;i++) A[i]=B[i];
//     // tinh C(k,n)
//     int c_k_n = giaiThua(n)/(giaiThua(k)*giaiThua(n-k));

//     for (int j = 1; j <= c_k_n; j++){
//         xuat(A, k);
//         generate_next_combination(A,B, n, k);
//     }
//     }
    
// }
#include <bits/stdc++.h>
using namespace std;
// string Ab[26] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "V", "X", "Y", "Z"};
bool SoSanh(int x, int y) {
    return x > y;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n + 1], x[10000] = {0}, stop = 0;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= k; i++) x[i] = i;
        sort(a + 1, a + n + 1);
        do {
            for (int i = 1; i <= k; ++i) cout << a[x[i]] << " ";
            cout << "\n";
            int l = k;
            while (l > 0 && x[l] == n - k + l) l--;
            if (l > 0) {
                x[l]++;
                for (int i = l + 1; i <= k; ++i) x[i] = x[l] + i - l;
            } else stop = 1;
        } while (stop != 1);
    }
}
// Cho dãy số A[] có N phần tử là các số nguyên dương khác nhau từng đôi một và một số K < N.

// Hãy liệt kê tất cả các dãy con khác nhau có K phần tử của A[], mỗi dãy đều được sắp xếp theo thứ tự tăng dần.

// Các dãy con được liệt kê lần lượt theo thứ tự từ điển.

// Input

// Dòng đầu ghi số bộ test, mỗi test có 2 dòng:

// Dòng đầu ghi hai số N và K (2 < K < N <15)
// Dòng thứ 2 ghi N số của dãy A[], các số đều nguyên dương, nhỏ hơn 100 và khác nhau từng đôi một.
// Output

// Với mỗi test, liệt kê tất cả các dãy con thỏa mãn, mỗi dãy con trên một dòng. 

// Ví dụ

// Input

// Output

// 1

// 4 3

// 3 2 5 4

// 2 3 4

// 2 3 5

// 2 4 5

// 3 4 5

 

// Giới hạn thời gian: 1s