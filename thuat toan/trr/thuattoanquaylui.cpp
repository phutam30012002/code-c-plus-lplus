#include<iostream>
#include<math.h>
using namespace std;

int A[100];
int n=4;

void xuat(int A[], int n) {
    for (int i = 1; i <= n; i++)
        cout << A[i];
    cout << endl;
}

void Try_i(int i){
    
    for(int j=0; j<= 1; j++) // duyet tat ca cac ket qua co the co
    {
        A[i] = j;
        if (i == n) // nếu i == n  (bằng độ dài chuỗi) đưa ra kết quả
            xuat(A, n);
        else // nếu không gọi đến vị trí tiếp theo
            Try_i(i+1);
    }
}

int main(){
    Try_i(1);
    return 0;
}
