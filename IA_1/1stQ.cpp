#include <iostream>
using namespace std;

//program to check whether a given number is positive or negative

int main(){
    double num;
    cout<<"Enter a Integer: ";
    cin>>num;
    if (num >= 0){
        cout<<num<<" : Is Positive Number";
    }
    else{
        cout<<num<<" : Is Negative Number";
    }
    return 0;
}
