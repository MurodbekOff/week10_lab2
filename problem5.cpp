#include <iostream>
using namespace std;

int count(const string& s, char a) {
    int count = 0;
    for (char n: s) {
        if (tolower(n)==tolower(a)) count++;
    }
    return count;
}

int main() {
    string s;
    char a;
    cin >> a>>s;
    cout << count(s,a) << endl;
    return 0;
}