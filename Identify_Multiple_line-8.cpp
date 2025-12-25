#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;

    cout << "Enter multiple lines (type 'END' to stop):\n";
    while (true) {
        getline(cin, line);
        if (line == "END") break;

        if (line.find("//") != string::npos) {
            cout << "Single-line comment found: " << line << endl;
        } else if (line.find("/*") != string::npos) {
            cout << "Start of multi-line comment found: " << line << endl;
        } else if (line.find("*/") != string::npos) {
            cout << "End of multi-line comment found: " << line << endl;
        }
    }

    return 0;
}
