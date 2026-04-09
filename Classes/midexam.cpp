#include<iostream>
using namespace std;
class Car{
    private:
    string name;
    int price;
    int model;
    int speed;
    int year;
    ;
    public:
    Car(string n,int p,int m){
    name = n;
    price = p;
    model = m;
    }
    void setSpeed(int s){
        speed =s;
    }
    void setYear(int y){
        year = y;
    }
    int getSpeed(){
        return speed;
    }
    int getYear(){
        return year;
    }
    void display(){
        cout<<"----Car Details----"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"price: "<<price<<endl;
        cout<<"model: "<<model<<endl;
        cout<<"year: "<<year<<endl;
        cout<<"speed"<<speed<<endl;
    }
};
    int main(){
        Car c1("CIVIC",20000,2025);
        
        c1.setSpeed(150);
        c1.setYear(2025);
        c1.display();
        return 0;
    }