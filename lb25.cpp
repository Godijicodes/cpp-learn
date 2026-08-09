//RANDOM EVENT GENERATOR
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int random = (rand()%6) +1;
    switch(random){
        case 1:cout<<"You win a car"<<endl;
        break;
        case 2:cout<<"You win a tirri"<<endl;
        break;
        case 3:cout<<"You win a bike"<<endl;
        break;
        case 4:cout<<"You win a scooter"<<endl;
        break;
        case 5:cout<<"You win a cycle"<<endl;
        break;
        case 6:cout<<"Kismat ichh kharab hai"<<endl;
        break;
    }
    return 0;
}