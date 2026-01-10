#include <iostream>
#include <fstream>
#include <string>

void practice() {
    std::ifstream file("./p8/p4.cpp"); // Open the file

    if (file.is_open()) {
        std::cout << "File opened successfully." << std::endl;

        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << '\n';
        }

        std::cout << std::endl;
    } else {
        std::cout << "Error opening file." << std::endl;
        return;
    }

    file.close();
}
