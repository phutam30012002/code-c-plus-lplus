#include<iostream>
using namespace std;
class People
{
	protected:
	string id;
	string name;
	public:
		void setId(string id)
		{
			this->id=id;
		}
		void say()
		{
			cout<<"Hello, I'm people";
		}
};
class Student:public People
{
    private:
	string code;
	string className;
	public:
	void test()
	{
		cout<<"code: "<<code<<"\n";
		cout<<"id: "<<id;
	}
	void setCode(string code)
	{
		this->code=code;
	}void setId(string id)
	{
		People::setId(id);
	}
	void say()
	{
	   cout<<"Hello,I'm student, my student code is: "<<code;	
	}
	void say(string major)
	{
		cout<<"Hello,I'm student, my classname is: "<<major;
	}	
};
int main()
{
	Student st;
	st.setCode("B20DCCN001");
	st.setId("00001111");
	st.test();
	cout<<"\n";
	st.say("IT");
	cout<<"\n";
	st.say();
}