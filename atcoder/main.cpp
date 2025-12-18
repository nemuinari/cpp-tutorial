#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    std::cin >> c;

    std::string vowels = "aeiou";

    if (vowels.find(c) != std::string::npos) {
        std::cout << "vowel" << std::endl;
    } else {
        std::cout << "consonant" << std::endl;
    }

    return 0;
}
// A - 居合を終え、青い絵を覆う
