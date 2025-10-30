#include <iostream>
using namespace std;

char to_lower(const char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

void CountChar(string s) {
    int vcount = 0, ccount = 0;
    for (int i = 0; i < s.length(); i++) {
        if (to_lower(s[i])>=97 && to_lower(s[i])<=122) {
            if (to_lower(s[i]) == 97 || to_lower(s[i]) == 101 ||to_lower(s[i]) == 105 ||to_lower(s[i]) == 111 || to_lower(s[i]) == 117) {
                vcount++;
            }
            else {
                ccount++;
            }
        }
    }
    cout<<"Vowels: "<<vcount<<endl;
    cout<<"Consonants: "<<ccount<<endl;
    }

int main() {
    string s;
    getline(cin, s);
    CountChar(s);
    return 0;
}