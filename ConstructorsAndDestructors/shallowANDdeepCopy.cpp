#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    double* cgpa;

    Student(string name, double cgpa){
        this -> name = name;
        this -> cgpa = new double;
        // storing val at address
        *(this -> cgpa) = cgpa;
    }

    // Custom Copy Constructor -> Shallow Copy
    // Student(Student &obj){
    //     this -> name = obj.name;
    //     this -> cgpa = obj.cgpa;
    // }

    // Deep Copy : Allocate dif memory to dynamically allocated vars
    Student(Student &obj){
       this -> name = obj.name;
       this -> cgpa = new double;
       *(this -> cgpa) = *(obj.cgpa);
       
    }

    void getInfo(){
        cout << name << " " << *cgpa << endl;
    }

};

int main(){
    Student s1("Sam", 8.8);
    Student s2(s1);
    *s2.cgpa = 8.9;
    s1.getInfo();
    s2.getInfo(); // now both s1 and s2 have cgpa = 8.9 : if we make shallow copy


}