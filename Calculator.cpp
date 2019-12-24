#include<iostream>
using namespace std;

class Calculator{
	int num1, num2, result;
	
	public:
		Calculator(int num11,int num22){
			num1 = num11;
			num2 = num22;
		}
		void Addition(){
			result = num1+num2;
			cout<<"Addition: "<<result;
		}
		void Sub(){
			result = num1-num2;
			cout<<"Subtraction: "<<result;
		}
		void Mul(){
			result = num1*num2;
			cout<<"Multiplication: "<<result;
		}
		void Div(){
			result = num1/num2;
			cout<<"Division: "<<result;
		}
		
		
};

int main(){
	int choice, num1, num2;
	
	
	cout<<"enter your choice:\n 1.Addtion\n 2.Subtraction\n 3.Multiplication 4.Division\n";
	cin>>choice;
	cout<<"Enter numbers: ";
	cin>>num1;
	cin>>num2;
	Calculator calculator(num1,num2);
	cout<<" "<<Calculator::Result();
	switch(choice){
		case 1: calculator.Addition();
				break;
		case 2: calculator.Sub();
				break;
		case 3: calculator.Mul();
				break;
		case 4: calculator.Div();
				break;
		default: cout<<"INVALID CHOICE-------";
	}
	return 0;
}
