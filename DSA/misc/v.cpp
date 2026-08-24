#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fullW = n / 7;
    int extraDays = n % 7;

    int minimum = fullWeeks * 2;
    int maximum = fullWeeks * 2;

    if (extraDays > 5) {
        minimum += extraDays - 5;
    }

    if (extraDays >= 1) maximum++;
    if (extraDays >= 2) maximum++;

    cout << minimum << " " << maximum;
}