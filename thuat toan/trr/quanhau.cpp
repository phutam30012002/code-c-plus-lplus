#include<iostream>
#include<math.h>
using namespace std;

int n=4;
int X[20];// bien vi tri cua hau 
bool A[20]; // bien kiem soat cot
bool Xuoi[20]; // bien kiem soat duong cheo xuoi
bool Nguoc[20]; // bien kiem soat duong cheo nguoc

void xuat(int A[], int n) {
    for (int i = 1; i <= n; i++)
        cout <<" "<<A[i];
    cout << endl;
}

void Try_i(int i){
  for(int j=1; j<=n; j++){
      if(A[j] && Xuoi[i-j +n] && Nguoc[i+j-1]){ // Xac dinh xem cot j co quan hau nao chua, co bi trung duong cheo hay khong?
          X[i]=j; // Xac dinh vi tri j hang i duoc dat vao 
          A[j]=false; // da duoc dat (lan sau khong dat nua)
          Xuoi[i-j+n]=false; // duong cheo da duoc su dung
          Nguoc[i+j-1]=false; // duong cheo nguoc da duoc sd
          if(i==n){
              xuat(X,n); // neu i==n (da xet het cac quan hau) dua ra kq
          }
          else{
              Try_i(i+1); // chua xet het , xet tiep quan hau thu i+1
          }
          A[j]=true; // xet lai gia tri de tao lai cach xep khac
      Xuoi[i-j+n] = true; // xet lai gia tri cheo xuoi de tao lai cach xep khac 
          Nguoc[i+j-1] = true; // xet lai gia tri cheo nguoc de tao lai cach xep khac 
    }
  }
}

int main(){
    // X[0] = 0;
    // init gia tri dau cho ban co
    for(int i=0; i<20; i++){
        A[i]=true;
        Xuoi[i]=true;
        Nguoc[i]=true;
    }
    Try_i(1);
    return 0;
}
