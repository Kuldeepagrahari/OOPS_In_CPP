#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    int age;
    string name;
};

// ultimately both student and teacher are Person
class Student : public Person {
public:
    string rollno;
};

class Teacher : public Person {
public:
    double salary;
};
int main() {
    Student p1;
    p1.name = "Sam";
    p1.rollno = "222106";
    cout << p1.name << " " << p1.rollno << endl;
}