#include<bits/stdc++.h>

using namespace std;

int main() {
    string n1, n2;
    cin >> n1 >> n2;
    string result = "";

    for (int i = 0; i < n1.length(); i ++) {

        char zor = (n1[i] - '0') ^ (n2[i] - '0')+'0';
        result += zor;
    }
    cout << result << endl;
    return 0;
}