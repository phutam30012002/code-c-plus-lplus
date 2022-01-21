#include<bits/stdc++.h>
using namespace std;
class Student{
    // public:
    // string id, class_name, fullname;
    // double point;
    private:
        string id, class_name, fullname;
        double point;
    public:
        string getid()
        {
            return id;
        }
        void setid(string id){
            this ->id =id;
        }
        double getpoint(){
            return point;
        }
        void setpoint(double point)
        {
            this ->point =point;
        }
        
};
main()
{
    // Student st1;
    // st1.id="b20dccn589";
    // cout << st1.id<<end
    Student st1;
    st1.setid("B20DCCN589");
    cout << st1.getid();
    Student st2;
    st2.setid("B20DCCN200");
    st2.setpoint(8);
    cout << st2.getpoint();
}