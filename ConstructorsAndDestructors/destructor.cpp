#include<bits/stdc++.h>
using namespace std;

class Friend {
public:
    string name;
    int joinedYear;
    string* recentChallenge;
    
    // Constructor
    Friend(string name, int year, string challenge) {
        this -> name = name;
        joinedYear = year;
        this -> recentChallenge = new string;
        *this -> recentChallenge = challenge;
    }

    // getter
    void getInfo() {
        cout << name << " " << joinedYear << " " << *recentChallenge << endl;
    }
     
    // Destructor
    ~Friend() {
        cout << "Cool!, I will delete all space you occupied during program execution \n";
        delete recentChallenge;
    }

};
int main(){
    Friend f1("Sam", 2022, "Make me Smile");
    f1.getInfo();

}