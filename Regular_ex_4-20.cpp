#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string over {a,b}: ";
    cin >> s;

    bool ok = true;
    if (s.size() < 2 || s.front() != 'a' || s.back() != 'a') ok = false;
    else {
        for (size_t i = 1; i + 1 < s.size(); ++i) {
            if (s[i] != 'a' && s[i] != 'b') {
                ok = false;
                break;
            }
        }
    }

    cout << (ok ? "Accepted\n" : "Rejected\n");
    return 0;
}
