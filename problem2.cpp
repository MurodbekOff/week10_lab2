#include <iostream>
using namespace std;
string reverse(string s) {
    string ans = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        ans += s[i];
    }
    return ans;
}
int main() {
    string s;
    cin >> s;
    cout << reverse(s);
}