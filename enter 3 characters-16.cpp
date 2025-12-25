#include <bits/stdc++.h>
using namespace std;

int main() {
    char a, b, c;

    cout << "Enter 3 characters: ";
    cin >> a >> b >> c;

    cout << "Next 3 characters: "
         << char(a + 1) << " "
         << char(b + 1) << " "
         << char(c + 1) << "\n";

    return 0;
}
