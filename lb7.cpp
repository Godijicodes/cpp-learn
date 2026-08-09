#include<iostream>
/*//Implicit data type CONVERSION
int main(){
	using std::cout;
	// safe example 
	int x = 4;
	double y = 6.7;
	double result = x+y;
	cout<<"the addition gives "<<result<<std::endl;
	// data loss example 
	double pie = 3.1415;
	int intpie = pie;
	cout<<"value of integer pie is "<<intpie<<'\n';
	return 0;
}*/
// EXPLIXCIT DATA TYPE CONVERSION
int main(){
	using std::cout;
	//traditional C type
	double price = 99.76;
int pricefor12 = (int)price*12;//bracket wale data type ke according input hoga var ka
	cout<<"the price for a dozen is "<<pricefor12<<std::endl;
//here the output is 1178 but should be 1197.12 gap occurs as decimal not seen.
	int num = 10;
	int deno = 9;
	double wrongsol=num/deno;
	double sol= static_cast<double>(num)/deno;
	cout<<"on using static is "<<sol<<" and not using static is "<<wrongsol<<'\n';
//the output of sol  is 1.111 and wrongsol is 1 as static ain't used
	return 0;
}
