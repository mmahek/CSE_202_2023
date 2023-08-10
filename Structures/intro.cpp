#include<iostream>
using namespace std;

struct students{
    string name;
    int rollNo;
    float marks;
};

int main()
{
    // string name = "Mayank";
    // int rollMo = 1212106;
    // float marks = 80.9;

    
    students student1;
    students student2;

    student1.name = "Akshanshu";
    student1.rollNo = 1212;
    student1.marks = 81.5;

    student2.name = "Bhanu";
    student2.marks = 79.43;
    student2.rollNo = 12345;

    cout<< student1.marks << endl;
    cout << student2.rollNo << endl;


}