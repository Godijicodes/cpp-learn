//temp conversion
#include<iostream>
typedef double num_t;
int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	cout<<"***************TEMP CONVERSION***************"<<endl;
	num_t temp,convertedtemp;//these var are used locally in every if clause
	char unit;
	cout<<"If you want Farenhite conversion type 'F'"<<endl;
	cout<<"If you want Celsius conversion type 'C'"<<endl;
	cout<<"what conversion you want to do tyoe F or C"<<endl;
	cin>>unit;
	if(unit =='F'||unit=='f'){
		cout<<"Enter the temperature in celsius to convert it into farenhite"<<endl;
		cin>>temp;
		convertedtemp = (temp*1.8)+32;
		cout<<"The temperature in Farenhite is "<<convertedtemp<<" F"<<endl;
		}else if(unit =='C'||unit=='c'){
		cout<<"Enter the temperature in farenhite to convert it into celsius"<<endl;
		cin>>temp;
		convertedtemp = (temp-32)/1.8;
		cout<<"The temperature in Celsius is "<<convertedtemp<<" C"<<endl;
		}else{
			cout<<"User Input is invalid"<<endl;
		}
	cout<<"*********************************************"<<endl;
	return 0;
}
