    #include<iostream>
#include<math.h>
#include<unistd.h>
using namespace std;


int n=5;
int k=3;
int X[100];

void xuat(int A[], int n) {
    for (int i = 1; i <= n; i++)
        cout << A[i];
    cout << endl;
}

void Try_combination(int i){
   for(int j=X[i - 1] + 1; j<=n-k+ i; j++){ // các khả năng của X[i] n=5, k=3, i = 1 => j_max = 5-3+1 = 3
        X[i] = j; // X[1] = 1  X[2]=2  : n =5, k=3, i =2 => j_max = 5-3+2 = 4  X[3]=3 => j_max = 5-3 + 3 = 5
        if (i == k){
            xuat(X, k);
        }
        else{
            Try_combination(i+1); // i + 1 = 2   // i+1 = 3
        }
        sleep(3);
   }

}

int main(){
    X[0] = 0;
    Try_combination(1);
    return 0;
}
