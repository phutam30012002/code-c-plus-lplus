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
// Cho d??y s??? A[] c?? N ph???n t??? l?? c??c s??? nguy??n d????ng kh??c nhau t???ng ????i m???t v?? m???t s??? K < N.

// H??y li???t k?? t???t c??? c??c d??y con kh??c nhau c?? K ph???n t??? c???a A[], m???i d??y ?????u ???????c s???p x???p theo th??? t??? t??ng d???n.

// C??c d??y con ???????c li???t k?? l???n l?????t theo th??? t??? t??? ??i???n.

// Input

// D??ng ?????u ghi s??? b??? test, m???i test c?? 2 d??ng:

// D??ng ?????u ghi hai s??? N v?? K (2 < K < N <15)
// D??ng th??? 2 ghi N s??? c???a d??y A[], c??c s??? ?????u nguy??n d????ng, nh??? h??n 100 v?? kh??c nhau t???ng ????i m???t.
// Output

// V???i m???i test, li???t k?? t???t c??? c??c d??y con th???a m??n, m???i d??y con tr??n m???t d??ng. 

// V?? d???

// Input

// Output

// 1

// 4 3

// 3 2 5 4

// 2 3 4

// 2 3 5

// 2 4 5

// 3 4 5

 

// Gi???i h???n th???i gian: 1s