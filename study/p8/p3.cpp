#include <iostream>
using namespace std;

void getline_example(char* buffer) {

    while (true) {
        cin.getline(buffer, sizeof(buffer));

        if (buffer[0] == '\0') {
            break;
        } else {
            cout << "You entered: " << buffer << endl;
        }
    }
}

void practice() {
    char buffer[256];

    getline_example(buffer);
}
