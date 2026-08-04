#include <iostream>

// - without default but with param constructor 
// - this keyword 

using namespace std;

class A{
    public:
    int val;
    A(int val) {
        this->val = val;
    }

    void experiment() {
        cout << this;
    }

};


int main() {
    A a(10);
    cout << a.val;

    a.experiment();

}