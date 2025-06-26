#include <iostream>
using namespace std;

// ✅ Class Definition:
// 💡 A class is a user-defined blueprint for creating objects with data and functions.
class Student {
private:
    // ✅ Data Members (Encapsulated):
    // 💡 Marked private to enforce encapsulation.
    string name;
    int age;

    // ✅ Static Data Member:
    // 💡 Shared among all objects, declared once for the class.
    static int totalStudents;

public:
    // ✅ Default Constructor:
    // 💡 Automatically called when object is created without parameters.
    // ⚠️ If no constructors are defined, compiler provides a default one.
    Student() {
        name = "Unknown";
        age = 0;
        totalStudents++;
    }

    // ✅ Parameterized Constructor:
    // 💡 Used to initialize object with custom values at creation time.
    // ⚠️ If only parameterized constructor is defined, default constructor is NOT created automatically.
    Student(string name, int age) {
        this->name = name;  // ✅ `this` is a pointer to the current object. Used to avoid naming conflict.
        this->age = age;
        totalStudents++;
    }

    // ✅ Copy Constructor:
    // 💡 Used to create a new object as a copy of an existing object.
    // 🚀 Automatically called in: `Student s2 = s1;` or `Student s2(s1);`
    // ⚠️ Default copy constructor does shallow copy. Define manually if deep copy or special logic is needed.
    Student(const Student& other) {
        name = other.name;  // ✅ Copying string (std::string does deep copy)
        age = other.age;
        totalStudents++;
    }

    // ✅ Setter Function:
    // 💡 Provides controlled access to private data.
    // ⚠️ Useful for validation before setting values.
    void setName(string name) {
        this->name = name;
    }

    // ✅ Getter Function:
    // 💡 Returns private data.
    // 🚀 Marked `const` because it doesn’t modify the object.
    string getName() const {
        return name;
    }

    // ✅ Another Member Function:
    // 💡 Can access both data and other member functions.
    void showDetails() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // ✅ Static Function:
    // 💡 Can access only static data. Called using class name.
    static int getTotalStudents() {
        return totalStudents;
    }

    // ✅ Destructor:
    // 💡 Called automatically when object goes out of scope or is deleted.
    // ⚠️ Use it to release resources (file handles, heap memory).
    ~Student() {
        totalStudents--;
    }
};

// ✅ Static Data Member Initialization:
// 💡 Must be initialized outside the class definition.
int Student::totalStudents = 0;

// ✅ Main Function - Testing the Class
int main() {
    // ✅ Default constructor is called
    Student s1;

    // ✅ Parameterized constructor is called
    Student s2("Kuldeep", 21);

    // ✅ Copy constructor is called here
    Student s3 = s2;

    // ✅ Set name for s1
    s1.setName("Aryan");

    // ✅ Show details using member function
    s1.showDetails();  // Output: Aryan
    s2.showDetails();  // Output: Kuldeep
    s3.showDetails();  // Output: Kuldeep (copied from s2)

    // ✅ Accessing static member using class name
    cout << "Total Student Objects: " << Student::getTotalStudents() << endl;

    return 0;
}
