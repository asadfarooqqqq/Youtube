#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int age;
    int marks;

public:

    void setName(string n){
        name = n;
    }

    void setAge(int a){
        if(a > 0){
            age = a;
        }
        else{
            cout<<"Invalid age"<<endl;
        }
    }

    void setMarks(int m){
        if(m >= 0 && m <= 100){
            marks = m;
        }
        else{
            cout<<"Marks must be between 0 and 100"<<endl;
        }
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    int getMarks(){
        return marks;
    }
};
int main(){
    Student s;
    s.setName("Asad");
    s.setAge(18);
    s.setMarks(60);
    cout<<endl;
    cout<<"Name :"<<s.getName()<<endl;
    cout<<"Age  :"<<s.getAge()<<endl;
    cout<<"Marks :"<<s.getMarks()<<endl;
    return 0;
}