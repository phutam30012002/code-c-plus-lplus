#include<bits/stdc++.h>
using namespace std;
main()
{
    string s1,s2;
    getline(cin , s1);
    getline(cin , s2);
    for(int i=0;i < s1.size();i++)
    {
        if(s1[i]>='A'&& s1[i]<='Z') s1[i]+=32;
    }
    for(int i=0;i < s2.size();i++)
    {
        if(s2[i]>='A'&& s2[i]<='Z') s2[i]+=32;
    }
    string token ;
    stringstream ss(s1);
    set<string> s;
    multiset<string> xs;
    while( ss >> token )
    {
        s.insert(token);
        xs.insert(token);
    }
    stringstream xx(s2);
    set<string> x;
    while(xx >> token)
    {
        x.insert(token);
    }
    for(string it: x)
    {
        if(xs.find(it)==xs.end()) xs.insert(it);
    }
    for(string it: xs)
    {
        cout << it <<" ";
    }
    cout << endl;
    set<string> giao;
    for(string it: s)
    {
        if(x.find(it)!=x.end()) 
        {
            giao.insert(it);
            x.erase(it);
        }
    }
    for(string it: giao) 
    {
        cout << it << " ";
    }
   
}
#include <bits/stdc++.h>
using namespace std;
string token;
set<string> hop, giao;
void tach(string s) {
   stringstream ss(s);
   while (ss >> token) {
      for (int i = 0; i < token.size(); i++) token[i] = tolower(token[i]);
      hop.insert(token);
   }
}
int main() {
   string s;
   getline(cin, s);
   tach(s);
   getline(cin, s);
   stringstream ss(s);
   while (ss >> token) {
      for (int i = 0; i < token.size(); i++) token[i] = tolower(token[i]);
      if (hop.find(token) != hop.end()) giao.insert(token);
      hop.insert(token);
   }
   
   for (string it:hop)
      cout << it << " ";
   cout << endl;
   for (string it :giao)
      cout << it << " ";
}
// Trong lập trình cơ bản, một từ được hiểu là một dãy ký tự liên tiếp không chứa khoảng trống, dấu tab hoặc dấu xuống dòng.


// Hãy xác định tập hợp các từ khác nhau trong một xâu ký tự, sau khi đã chuyển hết về dạng chữ thường. Sau đó nhập hai dòng ký tự và hiển thị hợp và giao của hai tập từ tương ứng.

// Input

// Chỉ có 2 dòng, mỗi dòng có độ dài không quá 1000 ký tự.

// Output

// Dòng 1 ghi hợp của 2 tập từ theo thứ tự từ điển

// Dòng 2 ghi giao của 2 tập từ theo thứ tự từ điển.

// Ví dụ

// Input

// Output

// Lap trinh huong doi tuong

// Ngon ngu lap trinh C++

// c++ doi huong lap ngon ngu trinh tuong

// lap trinh

 