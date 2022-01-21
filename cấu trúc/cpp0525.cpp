#include <bits/stdc++.h>
using namespace std;
typedef struct {
    string msv, ten, lop;
    float d1, d2, d3;
}pf;
bool checkSort(pf a,pf b){
    if(a.ten.compare(b.ten) < 0) return true;
    return false;
}
int main() {    
    int n; cin >> n;
    vector <pf> ds(n);
    for (int i = 0; i < n; ++i) {
        cin.ignore();
        getline(cin, ds[i].msv);
        getline(cin, ds[i].ten);
        cin >> ds[i].lop;
        cin >> ds[i].d1 >> ds[i].d2 >> ds[i].d3;
    }
    sort(ds.begin(),ds.end(),checkSort);
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << " " << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " ";
        cout << fixed << setprecision(1) << ds[i].d1 << " " <<ds[i].d2 <<" "<< ds[i].d3 <<"\n";
    }
}