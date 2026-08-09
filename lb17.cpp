//Using stringlength(),stringappend()
#include<iostream>
typedef std::string word_t;
int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	word_t name;
	int namelen;
	cout<<"Enter your name"<<endl;
	std::getline(cin,name);//used to read blank spaces in name by compiler
	namelen = name.length();//here variablename.length() used to tell the length
	//string.length() can also be used as condition in if clause like name.length()>=12
	cout<<"Length of the input name is "<<namelen<<endl;
	if(name.empty()){//tells us whether the string variable is empty or not
		cout<<"You didn't write your name!!"<<endl;
	}else{
		cout<<"Hello "<<name<<endl;
	}
	cout<<name.find(' ')<<endl;//finds the mentioned character position in the string
    name.insert(3,"#");//adds a string to the desired location index in brackett
	cout<<name<<endl;
	name.append("@yahoo.com");//Adds the brackett part at end of string
	cout<<"Your new mail id is "<<name<<endl;
	cout<<name.at(4)<<endl;//tells which character is at the mention position in string 
	name.erase(1,4);//deletes the part between the mentioned indexes
	cout<<name<<endl; 
	name.clear();//clears the name in name variable
	cout<<"My name is "<<name<<endl;
	
	return 0;
}
