#include<iostream>
#include <time.h>
using namespace std;
int main(){
    //result variable
    int result=1;
    // Seed for the randome generator
    srand(time(0));
    //Make result random variable/value
    result= rand()%6 +1;
    //welcome display
    cout<<"Welcome to random number generator!\n";
   // display dice result
   cout<<"You rolled :"<<result<<endl;
   return 0;
}