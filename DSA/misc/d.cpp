#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
int count = 0;

    int fullw = n / 7;
    int extrad = n % 7;
    count += fullw * 2;
    int mind = count;
    int maxd = count;

    if (extrad > 5) {
        mind += extrad - 5;
    }

    if (extrad >= 1) maxd++;
    if (extrad >= 2) maxd++;

    cout << mind << " " << maxd << endl;

}
