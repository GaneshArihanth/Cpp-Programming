#include <iostream>
using namespace std;

class rectangle{
    private:
    int width;
    int height;
    
    public:
    void setwh(int x, int y){
        width = x;
        height = y;
    }
    int getarea(){
        return width * height; 
    }
};

int main(){
    rectangle obj;
    obj.setwh(30,10);
    int A = obj.getarea();
    int *pointer =& A;
    cout<<"Area of the rectangle: "<<*pointer;
    return 0;
}