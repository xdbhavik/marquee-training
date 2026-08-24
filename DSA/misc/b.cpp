#include<bits/stdc++.h>
using namespace std;

int main() {
    string time = "";
    string s = "07:05:45PM";

    int n = s.length();
    string word = "";
    
    for (int i = 0; i < s.length(); i ++) {
        if (s[i] == ':' && i < 2) {
            int temp = stoi(word);
            if (s[n-2] == 'P') {
                if (temp != 12) {
                    temp += 12;
                    time += to_string(temp) + ':';
                    cout << temp;
                    return 0;
                }
                else if (temp == 12) {
                    time += to_string(temp) + ':';
                }
            }
            else if (s[n-2] == 'A') {
                if (temp == 12) {
                    time += "00:";
                    
                } else {
                    time += to_string(temp) + ':';
                }
            }
            
            word = "";
            continue;
        }
        else if (s[i] == ':' && i < 6) {
            
            time += word + ':';
            word = "";
            continue;
        }
        else if (s[i] == 'P') {
            time += word;
            break;
        }
        word += s[i];
    }
    cout << time;
    return 0;
}