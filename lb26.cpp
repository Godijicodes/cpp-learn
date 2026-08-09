//NUMBER GUESSING GAME
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    int num,guess,tries;
    tries = 0;
    srand(time(0));
    num = (rand()%1000)+1;
    do{
        cout<<"Your guess: ";
        cin>>guess;
        tries++;
        if(guess<num){
            cout<<"The number is higher"<<endl;
        }else if(guess>num){
            cout<<"The number is lower"<<endl;
        }else{
            cout<<"Correct!! Tries taken: "<<tries<<endl;
        }
    }while(guess!=num);
    return 0;
}