//MAKING A HYPOSTENUSE CALCULATOR
#include<iostream>
#include<cmath>
using num_t = double;
int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	num_t hypo,perp,base,sum;
    cout<<"length of perpendicular side"<<endl;
	cin>>perp;
	cout<<"length of base side"<<endl;
	cin>>base;
	sum = pow(perp,2)+pow(base,2);
	hypo = sqrt(sum);
	cout<<"length of hypotenuse of this triangle is "<<hypo<<endl;
	return 0;
}
