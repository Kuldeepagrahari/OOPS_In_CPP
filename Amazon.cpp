#include<bits/stdc++.h>
using namespace std;

class Product{
    public:
    string id, name;
    int price;
    int discount;
    vector<string> categories;

    Product(string id, string name, int price, int discount, vector<string> cat){
        this -> id = id;
        this -> name = name;
        this -> price = price;
        this -> discount = discount;
        this -> categories = cat;
       
    }

    void updateDiscount(int newDiscount){
        this -> discount = newDiscount;
    }

    void updatePrice(int newPrice){
        this -> price = newPrice;
    }
    void printDetails(){
        cout << "prod Name: " << name << endl << "price: " << price << endl << "discount offer: " << discount  << "%" << endl;
        cout << "Categories: [ ";
        for(int i = 0; i < categories.size(); i++) cout << categories[i] << ", ";
        cout << "]";
        cout << endl;
        cout << "-------------------------------------------------------";
        cout << endl;
    }
};

int main(){
    vector<vector<string>> catg_cont = {{"Clothes", "Cultural"}, {"Accessories", "Cap", "Fashion"}, {"Accessories", "Clothes", "Fashion"}};
    Product p1 = Product("12", "X", 299, 20, catg_cont[0]);
    Product p2 = Product("42", "XY", 199, 10, catg_cont[1]);
    Product p3 = Product("16", "XZ", 499, 20, catg_cont[2]);
    p1.printDetails();
    p1.updatePrice(159);
    p1.printDetails();
    p3.printDetails();
}