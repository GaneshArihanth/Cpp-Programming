#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a Number to find is Mutiplication: ";
    cin>>num;
    for (int i = 1; i <= 10; ++i){
        cout<<i<<" X "<<num<<" = "<<(i*num)<<endl;
    }

    return 0;
}
