#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        rev += tolower(s[i]);
    }
    if (s==rev) return true;
    return false;
}

int main() {
    string s;
    cin >> s;
    cout << isPalindrome(s) << endl;
    return 0;
}