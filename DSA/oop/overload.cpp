#include<iostream>
using namespace std;


int add(int a, int b)
{
    return a+b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(1,2) << endl;
    cout << add(1,2,3) << endl;
    cout << add('a', 'b') << endl;
    cout << add(true, false);
}