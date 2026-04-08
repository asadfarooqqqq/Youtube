#include<iostream>
using namespace std;
class Rectangle{
    private:
    float length;
    float width;
    float area;
    public:
    Rectangle(float l,float w){
        length = l;
        width = w;
    }
    void setArea(float a){
        area = length*width;
        area =a;
    }
    void getArea(){
        cout<<"The area of Rectangle is: "<<area<<endl;
    }
    void display(){
        cout<<"Length: "<<length<<endl;
        cout<<"Width:"<<width<<endl;
        cout<<"Area: "<<area<<endl;
    }
};  
    int main(){
        float length,width;
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter Width: ";
        cin>>width;
        Rectangle obj(length,width);
        obj.display();
        return 0;
    }