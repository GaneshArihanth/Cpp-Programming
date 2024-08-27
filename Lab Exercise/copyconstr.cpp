#include <iostream>
using namespace std;

class person{
    private:
    string name;
    int age;

    public:
    person(string a, int b){
        name = a;
        age = b;
    }
    void display(){
        cout<<"Name: "<<name<<endl<<"Age: "<<age;
    }
};

int main(){
    person obj1("Ganesh",18);
    person obj2=obj1;
    obj2.display();
    return 0;
} 