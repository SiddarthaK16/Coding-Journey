#include <iostream>
#include <string>
using namespace std;


class Teacher{
public:
    //properties/attributes and methods inside class
    string name;
    string dept;
    string subject;
    float salary;

    void changeDept(string newDept){
        dept=newDept;
    }

    void leave(int date,int month,int year){
        cout << "Enter date,month and year";
        cin >> date,month,year; 
        cout << name << " is on leave on " << date << "-" << month << "-" << year;
        }

    void displayInfo() {
        cout << "Name: " << name 
             << "\nDepartment: " << dept
             << "\nSubject: " << subject
             << "\nSalary: " << salary << endl;
    }

};

int main() {
    
    Teacher t1;
    t1.name="S Nakeeran";
    t1.dept="Electronics Engineering";
    t1.subject="Signals And Systems";
    t1.salary=150000;
    t1.displayInfo();
    return 0;
}

//We can access private stuff from classes using setter and getter functions inside public space..