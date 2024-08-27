#include <iostream>
#include <string>
#include <vector>
using namespace std;
class student{
    protected:
    int count90=0,count80=0,count70=0,count60=0;
    public:
    void count(vector<int> a){
        for (int i: a){
            if (i>=90){
                count90+=1;
            }
            else if((i<90) && (i>=80)){
                count80+=1;
            }
            else if ((i<80) && (i>=70)){
                count70+=1;
            }
            else if(i<70){
                count60+=1;
            }
        }
    }
};
class display_student : public student{
    public:
    void display_count(){
        cout<<"The no. of students with over 90 average: "<<count90<<"\n";
        cout<<"The no. of students with 90-80 average: "<<count80<<"\n";
        cout<<"The no. of students with 80-70 average: "<<count70<<"\n";
        cout<<"The no. of students with less than 70 average: "<<count60<<"\n";
    }
};
int main(){
    int a,sub,clavg,mark;
    string na;
    vector<int> avg;
    vector<string> name;
    cout<<"Enter the no. of students: ";
    cin>>a;
    cout<<"\n";
    cout<<"Enter the no. of subjects: ";
    cin>>sub;
    cout<<"\n";
    for(int i=0;i<a;i++){
        cout<<"Enter the students name: ";
        cin>>na;
        cout<<"\n";
        clavg=0;
        for(int i=1;i<=sub;i++){
            cout<<"Enter marks in subject "<<i<<": ";
            cin>>mark;
            clavg+=mark;
        }
        avg.push_back(clavg/sub);
        name.push_back(na);
    }
    display_student d;
    d.count(avg);
    d.display_count();
    return 0;
}