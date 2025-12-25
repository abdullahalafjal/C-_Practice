#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c) {
    string ops = "+-*/%=!&|<>";
    return ops.find(c) != string::npos;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Ch\tLetter\tDigit\tSymbol\tOperator\n";

    for (char ch : s) {
        if (ch == '\n') continue;

        bool isLetter = isalpha((unsigned char)ch);
        bool isDigit  = isdigit((unsigned char)ch);
        bool isSpace  = isspace((unsigned char)ch);
        bool isSym    = !isLetter && !isDigit && !isSpace;
        bool isOp     = isOperator(ch);

        cout << ch << '\t'
             << (isLetter ? "Yes" : "No") << '\t'
             << (isDigit  ? "Yes" : "No") << '\t'
             << (isSym    ? "Yes" : "No") << '\t'
             << (isOp     ? "Yes" : "No") << '\n';
    }

    return 0;
}
