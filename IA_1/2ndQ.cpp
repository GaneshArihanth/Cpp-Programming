#include <iostream>
using namespace std;

int main(){
    int num;
    double facl = 1;

    cout<<"Enter a Number to find its Factorial: ";
    cin>>num;

    if (num < 0){
        cout<<"Factorial is not Defined for Negative Integers";
    }
    else{
        for (int i = 1; i <= num; ++i){
            facl *= i;
        }
    }
    cout<<"Factorial of "<<num<<" is: "<<facl;
    
    return 0;
}