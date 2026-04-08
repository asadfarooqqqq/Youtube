#include<iostream>
using namespace std;
// classes concept
class Animal{
    // encapsulation(private,public,protected)
    private:
    string name;
    int age;
    public:
    Animal(string n,int a){
    name = n;
    age = a;  
    }
    string getName(){
    return name;
    }
    int getAge(){
        return age;
    }
    //function overloading
    void eat(){
        cout<<getName()<<" is eating"<<endl;
    }
    void eat(string food){
        cout<<getName()<<" is eating "<<food<<endl;
    }
    void eat(int times){
        cout<<getName()<<" eated "<<times<<" time"<<endl; 
    }
    void sleep(){
        cout<<getName()<<" is sleeping"<<endl;
    }
    virtual void speak() = 0;  // pure virtual function → Animal is now abstract
    //destructor
    ~Animal() { 
        cout<<name<<" destroyed\n"; 
}

};
    class Dog : public Animal{
        private:
        string breed;
        public:
        Dog(string name,int age,string breed) : Animal(name,age){
            this->breed = breed;
        }
        string getBreed(){
            return breed;
        }
        void speak()override{
            cout<<getName()<<" says:Woof!"<<endl;
        }
        void fetch(){
            cout<<getName()<<" is fetching the ball"<<endl;
        }
        ~Dog() {
             cout << getName() << " destroyed\n"; 
        }

    };
    class Cat : public Animal{
        private: 
        string colour;
        public:
        Cat(string name,int age,string colour) : Animal(name,age){
    this->colour = colour;
    }
    ~Cat() { cout << getName() << " destroyed\n"; }

    string getColour(){
        return colour;
    }
    void speak()override{
        cout<<getName()<<" says Meow"<<endl;
    }
    void purr(){
        cout<<getName()<<" says purr"<<endl;
    }
    };
    class Swimmer{
        public:
        ~Swimmer(){
        cout<<"Swimmer destroyed"<<endl;
    }
        void swim(){
            cout<<" is swimming";
        }
        void dive(){
            cout<<" is diving"<<endl; 
        }
    };
    class Duck :public Animal,public Swimmer{
        private:
        string colour;
        public:
        Duck(string name,int age,string colour):Animal(name,age){
            this->colour = colour;
        }
        ~Duck() { 
            cout << getName() << " Duck destroyed\n"; }

        string getColour(){
            return colour;
        }
        void speak()override{
            cout<<getName()<<" say:Quack"<<endl;
        }
        void swim(){
        cout<<getName()<<" is swimming!"<<endl;
    }
        void dive(){
        cout<<getName()<<" is diving!"<<endl;
    }
        };
    
    int main(){
        // objects creaated in main
    Dog d("Bruno",3,"Labroador");
    Cat c("kitty",2,"white");
    Duck d1("Donalds",2,"blue");
    cout<<"----Dog Details----"<<endl;
    cout<<"Name: "<<d.getName()<<" | "<<" Age: "<<d.getAge()<<" | "<<" Breed: "<<d.getBreed()<<endl;
    d.eat();
    d.eat("Dog food");
    d.eat(2);
    d.speak(); 
    d.fetch();
    cout<<endl;
    cout<<"----Cat Details----"<<endl;
    cout<<"Name: "<<c.getName()<<" | "<<" Age: "<<c.getAge()<<" | "<<" Colour: "<<c.getColour()<<endl;
    c.eat();
    c.eat("Biscuit");
    c.eat(2);
    c.sleep();
    c.speak();
    c.purr();
    cout<<endl;
    cout<<"----Duck Details----"<<endl;
    cout<<"Name: "<<d1.getName()<<" | "<<" Age: "<<d1.getAge()<<" | "<<" Colour: "<<d1.getColour()<<endl;
    d1.eat();
    d1.eat("Roti");
    d1.eat(1);
    d1.speak();
    d1.swim();
    d1.dive();
    cout<<endl;
    return 0;
    }