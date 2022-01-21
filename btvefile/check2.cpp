#include<bits/stdc++.h>
using namespace std;
struct Student{
    string  name;
};
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Student ds[n];
    for(int i=0;i<n;i++)
    {
      getline(cin , ds[i].name);
    }
    ofstream fb1;
    fb1.open("A.txt");
    for(int i=0;i<n;i++)
    {
        fb1 << ds[i].name;
        fb1 << "\n";
    }
    fb1.close();
}