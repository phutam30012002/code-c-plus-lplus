#include<bits/stdc++.h>
using namespace std;
struct student{
    char  name[190];
    int id,age;
};
int main()
{ 
    // // ofstream fb1;
    // // fb1.open("NHOM5.txt");
    // // fb1 << "Hello";
    // // fb1.close();
    // ifstream fb2;
    // fb2.open("NHOM5.txt");
    // string line;
    // getline(fb2,line);
    // fb2.close();
    // cout << line;
    student st;
    st.id =1;
    strcpy(st.name, "Nguyen Van A");
    // file chi dung kieu char 
    st.age=19;
    ofstream fb3;
    fb3.open("Nhom5.in",ios::binary);
    fb3.write(reinterpret_cast<char *>(&st),sizeof(student));
    fb3.close();
    ifstream fb4;
    fb4.open("Nhoms5.data", ios::binary);
    fb4.read(reinterpret_cast<char *>(&st) ,sizeof(student));
    fb4.close();
    cout << st.id <<" "<< st.name <<" "<< st.age;
} 