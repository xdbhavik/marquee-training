#include <bits/stdc++.h>
using namespace std;

int countStrings(string S, vector<string> arr)
{
    unordered_set<char> m;
    int count = 0;
    for (char c: S) {
        m.insert(c);
    }

    for (auto word: arr) {
        bool ok = true;
        for (auto c: word) {
            if (!m.count(c)) {
                ok = false;
                break;
            }
        }
        if (ok) count++;
    }
    return count;
}

int main()
{
    vector<string> arr = {"ab", "aab",
                          "abaaaa", "bbd"};
    string S = "ab";
    cout << countStrings(S, arr) << endl;
}