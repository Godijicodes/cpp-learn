#include<iostream>
//HOW TO TAKE USER INPUT
typedef std::string var_t;
int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	var_t name;
	int age;
	var_t father;
	cout<<"what is your name?"<<endl;
	cin>>name;//storing ans of above ques in name
	cout<<"what is your age?"<<'\n';
	cin>>age;//storing ans of above ques in age
	cout<<"what's your fathers name?"<<endl;
	cin>>father;//storing ans of above ques in father
	cout<<"your name is "<<name<<" and age is "<<age<<" father is "<<father<<endl;
	return 0;
}

