#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    bool inBlockComment = false;

    cout << "Enter multiple lines (type 'END' to stop):\n";
    while (true) {
        getline(cin, line);
        if (line == "END") break;

        string newLine = "";
        for (size_t i = 0; i < line.length(); i++) {
            if (!inBlockComment && i + 1 < line.length() && line[i] == '/' && line[i+1] == '*') {
                inBlockComment = true;
                i++;
            } else if (inBlockComment && i + 1 < line.length() && line[i] == '*' && line[i+1] == '/') {
                inBlockComment = false;
                i++;
            } else if (!inBlockComment && i + 1 < line.length() && line[i] == '/' && line[i+1] == '/') {
                break; // ignore rest of line
            } else if (!inBlockComment) {
                newLine += line[i];
            }
        }
        if (!newLine.empty()) cout << newLine << endl;
    }

    return 0;
}
