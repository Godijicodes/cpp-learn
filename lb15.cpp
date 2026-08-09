//studying &&,||amd ! operator
#include<iostream>
typedef bool word_t;
int main(){
	using std::cout;
	using std::cin;
	using std::endl;
    int temp;
	cout<<"Enter today's temperature :"<<endl;
	cin>>temp;
	if(temp>=0 && temp<=35){//here both condition should be true
		cout<<"The temperature is good"<<endl;
	}else{
		cout<<"Stay at home jackass!!"<<endl;
	}
	if(temp<=0||temp>=35){//here one condition needs to be true
	    cout<<"go home kiddo"<<endl;	
	}else{
		cout<<"go outside"<<endl;
	}
	if(!(temp<=0||temp>=35)){//here else stat works when condition met vice versa
		cout<<"go home kiddo";	
	}else{
		cout<<"go outside";
	}
	return 0;
}
