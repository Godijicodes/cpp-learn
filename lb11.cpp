//IF - ELSE STATEMENT
#include<iostream>
using no_t = double;
int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	no_t age;
	cout<<"Enter your age : ";
	cin>>age;
	if(age>=70){
		cout<<"unc please!! you're too old for this shit"<<endl;
	}else if(age>=18){
		cout<<"Yeah!!! Dawwg you can go in"<<endl;
	}else if(age>0){
		cout<<"go home kiddo"<<endl;
	}else{
		cout<<"CHAL CHAL CHAL CHAL CHAL CHAL !!!"<<endl;
	}
	return 0;
}
