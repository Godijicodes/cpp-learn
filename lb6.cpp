//ARITHEMETIC OPERATION AND ORDER OF PRECEDENCE
#include<iostream>
typedef double mynum_t;
int main(){
	using std::cout;
	mynum_t x = 20;
	//x +=3;
	//x = x + 3;
	//x++;//(increases the value by 1)
	//int remainder = x%3;// will work fine if x was an integer not double 
	//x = x +7 -8 *4/5;//output=21
	//x = x+7 -8*(4/5);// output=27, shows order of precedence
	cout<<x;
	return 0;
}
