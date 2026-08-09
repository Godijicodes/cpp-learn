//nested loops
#include<iostream>
typedef int num_t;
using namespace std;
int main(){
	for(num_t i=1;i<=2;i++){//This for loops tells how many rows formed
		for(num_t j=1;j<=4;j++){//this tells how many element in each row
			cout<<j<<' ';
		}cout<<'\n';//ends line according to first row loop
	}
	return 0;
}
