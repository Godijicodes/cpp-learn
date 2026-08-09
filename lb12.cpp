// SWITCH STATEMENTS 
#include<iostream>
using num_t = int;
int main(){
	using std::cout;
	using std::endl;
	num_t month;
	cout<<"Enter your month number to get month name from 1 to 12:  "<<endl;
	std::cin>>month;
	switch(month){
		case 1://here 1 is one of the possible outcomes of the inpput by user
		cout<<"January";
		break;//this is used to break the checking loop
		case 2:
		cout<<"Feburary";
		break;
		case 3:
		cout<<"March";
		break;
		case 4:
		cout<<"April";
		break;
		case 5:
		cout<<"May";
		break;
		case 6:
		cout<<"June";
		break;
		case 7:
		cout<<"July";
		break;
	    case 8:
		cout<<"August";
		break;
	    case 9:
		cout<<"September";
		break;
	    case 10:
		cout<<"October";
		break; 
	    case 11:
		cout<<"November";
		break;
	    case 12:
		cout<<"December";
		break;
	    default:
				cout<<"CHHOTII BACHII HO KYA ?!!";
		
	}
	return 0;
}
