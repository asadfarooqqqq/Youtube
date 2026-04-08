#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    int marks;
    int age;
    char grade;
    string subject;
    
    public:
    Student(string n,int m,int a,char g,string sub){
        name = n;
        if(marks<0){
            marks = m;
        }
        else{
            marks =0;
            cout<<"Invalid marks"<<endl;
        }
        if(age<0){
        age =a;
        }else{
            age =0;
            cout<<"Invalid age"<<endl;
        }
        grade =g;
        subject=sub;
    }
    void display(){
        cout<<"----Student Record----"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks"<<marks<<endl;
        cout<<"Grade: "<<grade<<endl;
        cout<<"Subject"<<subject<<endl;
    }
};  
    int main(){
        Student s("Asad",56,18,'C',"Maths");
        s.display();
        return 0;
    }