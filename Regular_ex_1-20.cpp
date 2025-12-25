#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string over {a,b}: ";
    cin >> s;

    bool ok = true;
    for (size_t i = 0; i < s.size(); ) {
        if (i + 1 < s.size() && s[i] == 'a' && s[i + 1] == 'b') {
            i += 2;
        } else {
            ok = false;
            break;
        }
    }

    cout << (ok ? "Accepted\n" : "Rejected\n");
    return 0;
}
