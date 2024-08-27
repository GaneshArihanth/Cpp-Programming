#include <iostream>
using namespace std;

class mathoperator{
    public:

    int add(int a, int b){
        return a + b;
    }
    double add(double a, double b){
        return a + b;
    }
    string add(string a, string b){
        return a + b;
    }
};

int main(){
    mathoperator math;
    int result1 = math.add(10, 30);
    double result2 = math.add(46.5, 32.2);
    string result3 = math.add("Ganesh ","Arihanth");

   cout<<result1<<endl;
   cout<<result2<<endl;
   cout<<result3<<endl;

    return 0;
}