#include<bits/stdc++.h>
using namespace std;
// methods and attributes/var binds together
class Account {
private:
    // data hiding: password and balance are sensitive information should not have access for others than responsible person of banks
    string password;
    double balance;  

public:
    string accountId;
    string username;
    
    double checkBalance(){
        return balance;
    }
};

int main(){

}