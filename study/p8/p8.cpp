#include <iostream>
#include <fstream>

void execute() {
    std::fstream file{"p8/sample.txt", std::ios::in};

    if (!file.is_open()) {
        std::cout << "Failed to open file." << std::endl;
        return;
    }

    file.seekg(-1, std::ios::end);

    std::cout << "Before last char - State: " << (file.good() ? "GOOD" : "ERROR") << std::endl;

    file.get();
    file.peek(); // Peek at the end of the file

    auto state1 = file.rdstate();
    std::cout << "After peek() at end - State: " << ((state1 & std::ios::eofbit) ? "EOF " : "")
              << ((state1 & std::ios::failbit) ? "FAIL " : "") << std::endl;

    char ch;
    file.get(ch); // Attempt to read past the end

    auto state2 = file.rdstate();
    std::cout << "After get(ch) at end - State: " << ((state2 & std::ios::eofbit) ? "EOF " : "")
              << ((state2 & std::ios::failbit) ? "FAIL " : "") << std::endl;

    file.close();
}
