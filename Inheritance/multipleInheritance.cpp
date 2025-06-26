#include<bits/stdc++.h>
using namespace std;

class Teacher {
public:
    vector<string> courses;
    int salary;
};

class Student {
public:
    string name;
    string rollno;
};

class TA : public Student, public Teacher{

};

int main() {
    TA t1;
    t1.name = "Sam";
    t1.salary = 10000000;
    cout << t1.salary << " " << t1.name << endl;

}
