#include<iostream>
using dec_t = double;
int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	dec_t num1,num2,result;
	char op;
	cout<<"****************CALCULATOR***************"<<'\n';
	cout<<"Enter the first number: "<<endl;
	cin>>num1;
	cout<<"Enter the second number: "<<endl;
	cin>>num2;
	cout<<"Enter the sign of operation you want to do as (+,-,/,*): "<<endl;
	cin>>op;
	switch(op){
	case '+':
		result = num1 + num2;
		cout<<"the result of this operation is :"<<result<<endl;
		break;
	case '-':
		result = num1 - num2;
		cout<<"the result of this operation is :"<<result<<endl;
		break;
	case '/':
		result = num1/num2;
		cout<<"the result of this operation is :"<<result<<endl;
		break;
	case '*':
		result = num1 * num2;
		cout<<"the result of this operation is :"<<result<<endl;
		break;
	default: 
		cout<<"Pagal hogo hai !! Tohke samajh nawh aa rii.."<<endl;
	}
	cout<<"****************************************"<<endl;
	
	return 0;
	
}
