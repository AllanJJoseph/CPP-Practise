#include <iostream>
using namespace std;

int main(){

    int sub1, sub2, sub3, sub4, sub5;
    float avgMarks;
    int TotMarks;

    cout << "Enter the marks of all the five subjects: ";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    TotMarks = sub1 + sub2  + sub3 + sub4 + sub5;
    avgMarks = TotMarks/ 5;

    cout << "Total Marks: " << TotMarks << endl;
    cout << "Average Marks: " << avgMarks << endl;

    if (90 <= avgMarks && avgMarks <= 100){
        cout << "Grade: A" << endl;
    }

    else if (80 <= avgMarks && avgMarks <= 89){
        cout << "Grade: B" << endl;
    }
    else if (70 <= avgMarks && avgMarks <= 79){
        cout << "Grade: C" << endl;
    }
    else if (60 <= avgMarks && avgMarks <= 69){
        cout << "Grade: D" << endl;
    } 
    else {
        cout << "Grade: F" << endl;
    }
    
    if (35 > sub1 || 35 > sub2 || 35 > sub3 || 35 > sub4 || 35 > sub5){
        cout << "Result: Failed" << endl;
    }else {
        cout << "Result: Passed" << endl;
    }


    return 0;
}