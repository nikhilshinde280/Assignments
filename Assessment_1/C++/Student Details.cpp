#include<iostream>
using namespace std;
class Student{
	int id, marks1, marks2, marks3;
	float total, average;
	string name; 
	public:
	Student(){
		
	}
	
	void setDetails(int id, string name, int marks1, int marks2, int marks3){
		this->id = id;
		this->name=name;
		this->marks1=marks1;
		this->marks2=marks2;
		this->marks3=marks3;
	}
	
	float getTotal(){
		total = marks1+marks2+marks3;
		return total;
		
	}
	float getAverage(){
		average= getTotal()/3;
		return average;
	}
	
	void printDetails(){
		
		cout<<id<<"  \t  "<<name<<"  \t     "<<marks1<<"\t\t"<<marks2<<"\t\t"<<marks3<<"\t\t"<<getTotal()<<"\t\t"<<getAverage()<<endl;
	}
};



main(){
	
	int id, marks1, marks2,marks3,count=0;
	string name;
	cout<<"Enter 3 Student's Details"<<endl;
	Student student[3];
	for(int i=0;i<3;i++){
		cout<<"Enter Student "<<++count<<" details\n";
		cout<<"ID: ";
		cin>>id;
		cout<<"Name: ";
		cin>>name;
		cout<<"Marks of Subject 1:";
		cin>>marks1;
		cout<<"Marks of Subject 2:";
		cin>>marks2;
		cout<<"Marks of Subject 3:";
		cin>>marks3;
		student[i].setDetails(id,name,marks1,marks2,marks3);
		
		cout<<"\n\n";
	}
	
	cout<<"\n ************* Student Details************\n";
	cout<<"\n ID  \t   NAME   \t   Subject1  \t  Subject2  \t Subject3  \t Total  \t  Average"<<endl;
	for(int i=0;i<3;i++){
		student[i].printDetails();
	}
	
	
	
}
