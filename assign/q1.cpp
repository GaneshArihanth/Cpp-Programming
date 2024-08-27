/*
#include<iostream>
using namespace std;

class student
{
public:
    int regno;
    string name;
    string course;

    student()
    {
        cout << "Enter your Rollno : ";
        cin >> regno;
        cout << "Enter your Name : ";
        cin >> name;
        cout << "Enter your Course you Need : ";
        cin >> course;
    }

    student(const student &obj)
    {
        name = obj.name;
        regno = obj.regno;
        course = obj.course;
    }

    ~student()
    {
        cout << "THANK YOU!";
    }
};

int main()
{
    student student1("balaji",1234,"aiml");
    student student2(student1);

    return 0;
}
*/
#include <iostream>
#include <cstring>

using namespace std;

class Student {
public:
    // Constructors
    Student(const char* name, int regno, const char* course);
    Student(const Student& other);  // Copy Constructor
    ~Student();  // Destructor

    // Copy Assignment Operator
    Student& operator=(const Student& other);

    // Display student details
    void displayDetails();

private:
    char* name;
    int regno;
    char* course;
};

// Constructor
Student::Student(const char* studentName, int registrationNumber, const char* studentCourse) {
    regno = registrationNumber;

    // Dynamically allocate memory for name and course
    name = new char[strlen(studentName) + 1];
    strcpy(name, studentName);

    course = new char[strlen(studentCourse) + 1];
    strcpy(course, studentCourse);
}

// Copy Constructor
Student::Student(const Student& other) {
    regno = other.regno;

    // Dynamically allocate memory for name and course
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);

    course = new char[strlen(other.course) + 1];
    strcpy(course, other.course);
}

// Destructor
Student::~Student() {
    delete[] name;
    delete[] course;
    cout << "Student object with regno " << regno << " is destroyed.\n";
}

// Copy Assignment Operator
Student& Student::operator=(const Student& other) {
    if (this != &other) {
        // Release existing memory
        delete[] name;
        delete[] course;

        // Copy values and dynamically allocate memory
        regno = other.regno;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        course = new char[strlen(other.course) + 1];
        strcpy(course, other.course);
    }
    return *this;
}

// Display student details
void Student::displayDetails() {
    cout << "Registration Number: " << regno << "\n";
    cout << "Name: " << name << "\n";
    cout << "Course: " << course << "\n";
}

int main() {
    // Create a student object
    Student student1("John Doe", 12345, "Computer Science");

    // Create a copy of the student using the copy constructor
    Student student2 = student1;

    // Display details of the original and copied student
    cout << "Original Student:\n";
    student1.displayDetails();

    cout << "\nCopied Student:\n";
    student2.displayDetails();

    // Exiting the scope will call the destructor for both student objects

    return 0;
}