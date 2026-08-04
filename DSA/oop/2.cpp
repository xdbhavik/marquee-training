#include <iostream>
using namespace std;

class Student {
    private:
    string name;
    int age;
    public:
    
    Student() {
        cout << "Default";
    }

    Student(string name, int age) {
        this->name = name;
        this(age);
        
    }

};


int main() {
    Student s1("Bhavik", 21);
    
}