#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
    for(int row = 1; row <= n; row++) {
        for(int space = 1; space <= n - row; space++) {
            cout << " ";
        }
        
        for(int star = 1; star <= 2 * row - 1; star++) {
            if(star == 1 || row == n || star == 2 * row - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}