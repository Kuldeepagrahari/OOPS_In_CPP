#include<bits/stdc++.h>
using namespace std;

class Teacher {
public:
    string name;
    string department;
    int salary;
    vector<string> courses;
    // Non-Parameterized Constructor
    Teacher(){
        department = "CSE";
        salary = 100000;
        courses = {};
        name = "XYZZ";
    }
    // Parameterized
    Teacher(string n, string dep, int sal, vector<string> c){
        name = n;
        department = dep;
        salary = sal;
        courses = c;
    }
    // We can create multiple constructors with dif type and num of parameters -> Concept: Constructor Overloading[Polymorphism]
    // And only that constructor will be called once during object creation, which matches the arguments = parametrs

    //Copy Constructor : Custom Copy Constructor
    Teacher(Teacher &obj){ // Recommended : take the reference of object -> pass by ref
        this -> name = obj.name;
        this -> department = "CSE";
        this -> salary = obj.salary;
        this -> courses = obj.courses;

    }

    // Methods
    void getInfo(){
        cout << name << " " << department << " " << salary << " "<< endl;
        for(int i = 0; i < courses.size(); i++) cout << courses[i] << " ";
        cout << endl;
    }
};

int main(){
    Teacher t1; // Compiler calls a default constructor internally
    Teacher t2;
    cout << t2.department << " \n";
    Teacher t3("ARS", "Maths", 1000000, {"Calculus", "Geometry"});
   
    Teacher t4(t3); // Default Copy Constructor call -> by itself/compiler (if no custom copy constructor defined in class)
    t4.getInfo();
}