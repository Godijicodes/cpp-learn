//Rolling dice
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));//Shakes up the rolling dice
    int dice = (rand()%6) + 1;//the rand%6 makes sure the number is below 6 
    //and +1 makes sure no 0 outcome as dice has 1 to 6
    cout<<"The number by the dice is "<<dice<<endl;
    return 0;
}