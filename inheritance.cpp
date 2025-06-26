#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person() {
        cout << "parent constructor call... \n";
    }
    Person(string n, int age) {
        cout << "parent constructor call... \n";
        name = n;
        this -> age = age;
    }

    ~Person() {
        cout << "Parent destructor call... \n";
    }
};

// Inherit Prosn class in Public scope
class Student : public Person {
public: 
    string rollno;

    Student(string name, int age, string rollno) : Person(name, age) {
        cout << "Child constructor call... \n";
        this -> rollno = rollno;

    }
    void getInfo() {
        cout << name << " " << age << " " << rollno << endl;
    } 
    ~Student(){
        cout << "Child destructor call...\n";
    }
};
int main(){
    Student s1("Sam", 21, "22106");
    s1.getInfo();

}

