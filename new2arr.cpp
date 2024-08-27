#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int numSt, numSub, stavg;
    cout << "Enter the number of students: ";
    cin >> numSt;
    cout << "Enter the number of subjects: ";
    cin >> numSub;

    stavg = 0;

    string stname[100];
    int avg[100];
    int avgcopyog[100];
    int indexing;

    for (int i = 0; i < numSt; i++) {
        string name;

        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> name;
        stname[i] = name;

        for (int j = 0; j < numSub; ++j) {
            int mark;
            cout << "Enter the marks for subject " << j + 1 << ": ";
            cin >> mark;
            stavg += mark;
        }
        avg[i] = stavg / numSub;
        avgcopyog[i] = avg[i];
        cout << "Total marks obtained by " << name << ": " << stavg << "\n";
        stavg = 0;
    }

    int above90 = 0;
    int between90And70 = 0;
    int between70And80 = 0;
    int below70 = 0;

    for (int i = 0; i < numSt; i++) {
        if (avg[i] >= 90) {
            above90++;
        } else if (avg[i] >= 80 && avg[i] < 90) {
            between90And70++;
        } else if (avg[i] >= 70 && avg[i] < 80) {
            between70And80++;
        } else {
            below70++;
        }
    }

    cout << "Number of students with marks above 90: " << above90 << endl;
    cout << "Number of students with marks between 70 and 80: " << between90And70 << endl;
    cout << "Number of students with marks between 70 and 80: " << between70And80 << endl;
    cout << "Number of students with marks below 70: " << below70 << endl;

    sort(avg, avg + numSt);

    int highest_mark = avg[numSt - 1];
    cout << "Highest mark scored: " << highest_mark << "\n";

    indexing = distance(avgcopyog, find(avgcopyog, avgcopyog + numSt, highest_mark));
    cout << "Highest mark scored by student: " << stname[indexing];

    return 0;
}
