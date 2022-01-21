#include<iostream>
#include<math.h>
#include<unistd.h>
using namespace std;


// A = [3, 2, 6, 5, 4, 1]


void generate_next_permutation(int A[], int n){
    // 1234 
    int j,k,r,s,temp;
    j = n-2;
    // tim j la chi so lon nhat aj < a_j+1
    while (A[j] > A[j+1] && j >= 0){
        j = j - 1;
    }
    // tim ak la so nho nhat lon hon aj o ben phai aj
    k = n-1;
    // cout << k;
    while (A[j] > A[k]){
        k=k-1; 
    }
    // swap aj va ak
    temp = A[j];
    A[j] = A[k];
    A[k] = temp;
    //1243
   
    // sap xep lai chuoi // lat nguoc doan tu a_j+1 den an
    r=j+1; s=n-1;
	while(r<s) { 
        temp=A[r]; 
        A[r] = A[s];
        A[s]=temp;
        r = r+1;
        s = s-1;
    }
    sleep(3);
       
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
    
 int A[n];

    //Kh?i t?o m?ng cau hinh dau tien
    for(int i = 0; i < n; i ++) A[i] = i + 1;
   
    // liet ke tat ca cac cau hinh 
    for (int i = 0; i < giaiThua(n); i++){
        xuat(A, n);
        generate_next_permutation(A, n);
        // xuat(A, n); 
    }
}
