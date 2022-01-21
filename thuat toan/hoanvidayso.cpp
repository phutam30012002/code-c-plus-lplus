#include<bits/stdc++.h>
using namespace std;
// int giaithua(int n)
// {
//     if(n==1) return 1;
//     return n*giaithua(n-1);
// }
void xuat(int a[],int n)
{
    for(int i=0;i<n;i++) 
    {
        cout << a[i] <<" ";
    }
    cout << endl;
}
void hoanvi(int a[],int n)
{
    sort(a,a+n);
    do{
        xuat(a,n);
    }while (next_permutation(a,a+n));
    // ham hoan vi thu vien stl;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
   // sort(a,a+n);
    hoanvi(a,n);
}
// Cho dãy số A[] có N phần tử là các số nguyên dương khác nhau từng đôi một. Hãy liệt kê tất cả các hoán vị của dãy số A[] theo thứ tự tăng dần, tức là hoán vị đầu tiên có giá trị tăng dần từ trái qua phải, hoán vị cuối cùng giảm dần từ trái qua phải.

// Input

// Dòng đầu ghi số N (1 < N < 9)

// Dòng thứ 2 ghi N số của dãy A[] (0 < A[i] < 10000)

// Output

// Ghi mỗi hoán vị của dãy số trên một dòng

// Ví dụ

// Input

// Output

// 3

// 88 77 99

// 77 88 99

// 77 99 88

// 88 77 99

// 88 99 77

// 99 77 88

// 99 88 77