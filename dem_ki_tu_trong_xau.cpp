#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            cout << i << endl;
            count++; 
        }
    }
    cout << count << endl;
    return 0;
}

