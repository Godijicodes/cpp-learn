//ternanry op[eraor comdition?exp1:exp2;
#include<iostream>
typedef int num_t;
int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	num_t marks;
	cout<<"Enter your marks obtained: "<<endl;
	cin>> marks;
	//marks>=40?cout<<"you are pass":cout<<"You are fail";
	cout<<(marks>=40?"You are pass":"You are fail");
	//Both above lines do the same shit but lowerr one is quicker to write
	return 0;
}
