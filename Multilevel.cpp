#include<iostream>
using namespace std;

class Person{
	char name[30];
	int age;
	public:
		void SetInfo(){
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Age:";
			cin>>age;
		}
		void GetInfo(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
class Employee: public Person{
	int empid;
	int sal;
	public:
		void SetInfo(){
			Person::SetInfo();
			cout<<"Enter empid: ";
			cin>>empid;
			cout<<"Enter Employee salary: ";
			cin>>sal;
		}
		void GetInfo(){
			cout<<"EMPID: "<<empid<<endl;
			cout<<"Employee Salary: "<<sal;
			
		}
		float GetSal(){
			return sal;
		}
		
		
};
class Manager: public Employee{
	int mgrid,salary;
	public:
			void SetInfo(){
				Employee::SetInfo();
				cout<<"Enter mgrid: ";
				cin>>mgrid;
			}
			
			void newSalary(){
				cout<<endl<<"Manager Salary:"<<Employee::GetSal()+5000;
			}
			void GetInfo(){
				Person::GetInfo();
				Employee::GetInfo();
				cout<<endl<<"Manager id:"<<mgrid<<endl;
				newSalary();
			}
			
};

main(){
	Manager m;
	
	m.SetInfo();
	m.GetInfo();
	
}
