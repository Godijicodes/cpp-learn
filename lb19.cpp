//DO WHILE LOOP
#include<iostream>
using namespace std;
typedef double dec_t;
int main(){
	dec_t k;
	cout<<"Enter the value of k: ";
	cin>>k;
	do{
		//k++;here means that the input value of k will be incremented
		cout<<k<<endl;
		k++;//here it means that after taking the value by user then it will be added
	}while(k<=50);
	return 0;
}
