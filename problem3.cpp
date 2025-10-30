#include <iostream>
using namespace std;

bool isAnagram(string s, string t) {
    bool found = false;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < t.length(); j++) {
            if (s[i] == t[j]) {
                found = true;
                s[i] = ' ';
                t[j] = ' ';
            }
        }
        if (!found) return false;
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') return false;
    }
    return true;
}

int main() {
    string s, t;
    cin >> s >> t;
    if (isAnagram(s, t)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}