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
        cout << "Person constructor call... \n";
        name = n;
        this -> age = age;
    }

    ~Person() {
        cout << "Person destructor call... \n";
    }
};

// Inherit Prosn class in Public scope
class Student : public Person {
public: 
    string rollno;

    Student(string name, int age, string rollno) : Person(name, age) {
        cout << "Student constructor call... \n";
        this -> rollno = rollno;

    }
    void getInfo() {
        cout << name << " " << age << " " << rollno << endl;
    } 
    ~Student(){
        cout << "Student destructor call...\n";
    }
};
class Graduates : public Student {
public:
    string research;
    Graduates(string research, string name, int age, string rollno) : Student(name, age, rollno) {
        cout << "Graduates constructor call...\n";
        this -> research = research;
    }
    void getInfo() {
        cout << name << " " << age << " " << rollno << " " << research << endl;
    } 
    ~Graduates(){
        cout << "Graduates destructors call...\n";
    }

};
int main(){
    Graduates s1("Deep Learning", "Sam", 21, "22106");
    s1.getInfo();

}

