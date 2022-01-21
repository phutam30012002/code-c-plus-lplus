#include<iostream>
#include<math.h>
#include<unistd.h>

using namespace std;

void generate_next_combination(int A[], int n, int m){
    int i = m - 1;
    // xet tu cuoi day ve dau day xem dk cua a[i]
    while (A[i] == (n-m+i + 1))
    {
        i = i - 1;
    }
    // neu a[i] != n-m+i +1 
    A[i] = A[i] + 1;

    // Xet cac phan tu phia sau 
    for(int j=i+1; j < m ; j++){
        A[j] = A[i] + j - i ;
    }
    // sleep(3);
    
}

void xuat(int A[], int n) {
    for (int i = 0; i < n; i++)
        cout << A[i];
    cout << endl;
}

int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}

int main(){
    int n;
    // nhap gia tri n
    cout << "Nhap n: ";
    cin >> n;
    // nhap gia tri m < n
    int m;
    cout << "Nhap m (m<n): ";
    cin >> m;

    int A[m];
    //Khởi tạo mảng // khoi tao cau hinh dau tien
    for(int i = 0; i < m; i ++) A[i] = i + 1;

    // tinh C(k,n)
    int c_k_n = giaiThua(n)/(giaiThua(m)*giaiThua(n-m));

    for (int j = 1; j <= c_k_n; j++){
xuat(A, m);
        generate_next_combination(A, n, m);
    }
    
}
