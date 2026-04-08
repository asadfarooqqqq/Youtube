#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;
    int age;
    char grade;
    string subjectname;

public:
    // Parameterized Constructor
    Student(string n, int m, char g, int a, string subject) {
        name = n;
        grade = g;
        subjectname = subject;

        // Logic check for marks
        if (m >= 0) {
            marks = m;
        } else {
            marks = 0; 
            cout << "Invalid marks provided for " << name << "!" << endl;
        }

        // Logic check for age
        if (a > 0) {
            age = a;
        } else {
            age = 0;
            cout << "Invalid age provided for " << name << "!" << endl;
        }
    }

    void display() {
        cout << "--- Student Record ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
        cout << "Marks: " << marks << endl;
        cout << "Subject: " << subjectname << endl;
    }
}; // Added missing semicolon

int main() {
    // Create the object and pass parameters immediately
    Student s("Asad", 50, 'A', 20, "Maths");
    
    // Call the display method on the object
    s.display();

    return 0;
}