#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main() {
	fstream f1;
	f1.open("PTIT.in", ios::out);
	string s; getline(cin, s);
	f1 << s;
	f1.close();
	f1.open("PTIT.in", ios::in);
	ofstream f2;
	f2.open("PTIT.out");
	while (!f1.eof()) {
		string str;
		getline(f1, str);
		f2 << str << endl;;
	}
	f2.close();
	f1.close();
}