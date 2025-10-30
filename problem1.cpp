#include <iostream>
using namespace std;

void search(string& s, char& key) {
    bool found = false;
    for (char i: s) {
        if (i == key) {
            found = true;
            break;
        }
    }
    if (found) cout<<"found";
    else cout<<"not found";
}

int main() {
    string s;
    char c;
    cin >> c>>s;
    search(s,c);


    return 0;
}