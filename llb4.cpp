/*#include<iostream>
namespace adi{
	std::string dumb = "Bro is dumb";
}
int main(){
	std::string dumb = "cool";
std::cout<<"dumb means "<<adi::dumb;
	return 0;
}
#include <iostream>
namespace first{
	int x = 2;
}int main(){
	using namespace first;
	//if  the x =3 line written here then the compiler would havve shown error
	//and hence the line after sum line so sum will take namesp x value
	//and  the x will be 3 after that
    int sum = x+80;
	int x =3;
	
	std::cout<< "value is "<< sum << " if value of x is "<<x<<" then incorrect";
	return 0;
}*/

/*#include<iostream>
int main(){
	using namespace std;
	string data = "bad";
	cout<<"data is very "<< data;
	return 0;
}
//this has chances of  naming  conflict so not good
*/
//BELOW IS THE MOST VIABLE SOLUTION 
#include<iostream>
int main(){
	using std::cout;
	using std::string;
    string aditya = "Aditya is awesome";
	cout<<"is it true that "<<aditya;
	return 0;
}
