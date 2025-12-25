#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    int lineCount = 0;

    cout << "Enter lines:" << endl;

    while (true) {
        getline(cin, line);
        if (line.empty())
            break;
        lineCount++;
    }

    cout << "Number of lines entered: " << lineCount << endl;

    return 0;
}

