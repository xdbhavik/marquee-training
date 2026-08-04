#include<iostream>
using namespace std;

class Animal{
    public: 
    void eat() {
        cout << "Animal is eating";
    }
};

class Dog: public Animal{
    public:
    void eat() {
        cout << "Dog is eating";
    }
};

int main() {
    Animal* a = new Animal();
    Animal* a1 = new Dog();
    Dog* d = new Dog();
    Dog* d1 = new Animal();
}