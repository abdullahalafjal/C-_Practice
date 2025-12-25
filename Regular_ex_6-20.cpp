#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string over {a,b}: ";
    cin >> s;

    bool ok = true;
    if (s.size() != 4) ok = false;
    else {
        for (char c : s) {
            if (c != 'a' && c != 'b') {
                ok = false;
                break;
            }
        }
        if (ok && s[1] != 'a') ok = false;
    }

    cout << (ok ? "Accepted\n" : "Rejected\n");
    return 0;
}
