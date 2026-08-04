#include<iostream>
using namespace std;

class Animal{
    public:
    string name;

Animal(string s) {
    name = s;
}
    virtual void eat() {
        cout << "Animal is eating" << endl;
    }
    string s = "living";
};

class Dog : private Animal {
    public:
    void bark() {
        cout << "dog barks" << endl;
    }
    

    void eat() override{
        cout << "Dog is eating" << endl;
    }
};

class Cat : Animal {
    public: 
    void meow() {
        cout << "cat eats" << endl;
    }


    void callParent() {
        Animal::eat();
    }
};


int main() {
    Dog d;
    d.bark();

    d.eat();

    Cat c;
    c.meow();
c.callParent();

    return 0;
}

