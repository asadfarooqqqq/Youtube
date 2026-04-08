#include<iostream>
#include<string>
using namespace std;
class Product{
    private:
    string productName;
    int productId;
    float productPrice;
    public:
    Product(){
        productName = "Unknown";
        productId = 0;
        productPrice =0.0;
    }
    Product(string n,int ID,float p){
        productName = n;
        productId =ID;
        if(p>=0){
        productPrice = p;
        }else{
        productPrice=0.0;
        cout<<"Invalid Price";
    }
}
         void display(){
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << productPrice << endl;
    }
};  

    int main(){
    Product p1; 
    p1.display();

    cout << endl;

    Product p2("Mobile", 101, 25000);
    p2.display();

    cout << endl;

    Product p3("Headphones", 102, -500);
    p3.display();

    return 0;
}