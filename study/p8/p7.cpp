#include <iostream>
#include <fstream>
#include <string>

void execute() {
    std::fstream file{"p8/sample.txt", std::ios::in | std::ios::out | std::ios::trunc};

    if (!file.is_open()) {
        std::cout << "Failed to open file." << std::endl;
        return;
    }

    file << "Hello, World!" << std::endl;
    file.seekp(7);
    file << "file seek" << std::endl;

    file.flush();  // Ensure all output is written to the file
    file.seekg(0); // Move the get pointer back to the beginning

    std::string line;
    std::getline(file, line);
    std::cout << line << std::endl;

    file.close();
}
