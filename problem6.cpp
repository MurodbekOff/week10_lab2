#include <iostream>
using namespace std;

void count(string s, int counts[]) {
    for (int i = 0; i < s.size(); i++) {
        if (tolower(s[i])>=97 && tolower(s[i])<=122) {
            counts[tolower(s[i])-97]++;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout<<char(i+97)<<": "<<counts[i]<<endl;
    }
}

int main() {
    string s;
    getline(cin,s);
    char s1[s.length()];
    int counts [26];

    for (int i = 0; i < 26; i++) {
        counts[i]=0;
    }

    for (int i = 0; i < s.length(); i++) {
        s1[i] = s[i];
    }

    count(s1, counts);
    return 0;
}