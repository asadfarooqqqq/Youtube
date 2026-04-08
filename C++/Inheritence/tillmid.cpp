#include<iostream>
using namespace std;
//classes
class Parent{
    //encapsultaion(private , protected, public)
    private:
    string name;
    int age;
    protected:
    string cnic;
    public:
    //Constructor
    //Default 
    Parent(){
        name = "Unknown";
        age = 0;
    }
    //Parameterized constructor
    Parent(string n,int a){
        name = n;
        age = a;
    }
    //getters
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    
};