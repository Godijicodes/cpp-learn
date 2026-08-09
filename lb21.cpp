//Break and continue 
#include<iostream>
using namespace std;
typedef double num_t;
int main(){
	for(num_t i=1;i<=10;i++){
	/*if(i==8){
		break;//stops the loop where the condition met
	}*/
		if(i==6){
		continue;//skips the part where condition is true and continues till end
	}
		cout<<i<<endl;
	}
	return 0;
}
