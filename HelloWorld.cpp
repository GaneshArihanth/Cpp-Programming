#include <iostream>
using namespace std;

class employee{
private:
    int id;
    int salary;
    string name;

public:
    employee(int x, string y, int z){
        id = x;
        name = y;
        salary = z;
    }
    void print(){
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<salary<<endl;
    }
    void setsalary(int s){
        salary = s;
    }
    int getsalary(){
        return salary;
    }
};

int main(){
    employee obj1(50075,"GaneshArihanth",120000);
    obj1.setsalary(150000);
    obj1.print();
    cout<<obj1.getsalary();
    return 0;
}