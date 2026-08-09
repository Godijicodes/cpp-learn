///Random Number but not truly random
#include<iostream>
#include<ctime>
using namespace std;
int main(){
srand(time(0));//shakes up the no. box everytime so no. do not repeats
int random = rand();//picks a number from the box at random
cout<<"The random number is "<<random<<endl;
    return 0;
}