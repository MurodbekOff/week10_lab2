#include <iostream>
using namespace std;

int authentic(string s) {

    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    int count = 0;
    string temp = "";

    for (int i = 0; i < s.length(); i++) {
        bool exists = false;
        for (int j = 0; j < s.length(); j++) {
            if (s[i]==temp[j]) exists = true;
        }
        if (!exists) {
            count++;
            temp+=s[i];
        }
    }
    return count;
}

int main() {
    string a;
    cin >> a;
    cout << authentic(a) << endl;
    return 0;
}