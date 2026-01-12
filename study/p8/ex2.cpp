#include <iostream>
#include <fstream>
#include <string>

class Files {
    std::string filename;

public:
    Files() : filename{""} {} // default constructor
    Files(const std::string& fname) : filename{fname} {}

    void out_file(const std::string& data) {
        std::ofstream out{filename, std::ios::binary};
        if (!out) {
            std::cerr << "Error opening file for writing: " << filename << std::endl;
            return;
        }
        out.write(data.c_str(), data.size());
    }

    void in_file() {
        std::ifstream in{filename, std::ios::binary};
        if (!in) {
            std::cerr << "Error opening file for reading: " << filename << std::endl;
            return;
        }

        char ch;
        while (in.get(ch)) {
            std::cout << ch;
        }
        std::cout << std::endl;
    }
};

void execute() {
    std::string filename;
    std::cout << "Enter filename: ";
    std::cin >> filename;

    Files file(filename); // file object with filename

    std::string data;
    std::cout << "Enter data: ";
    std::getline(std::cin >> std::ws, data); // read entire line including spaces

    file.out_file(data);

    std::cout << "Read from file: ";
    file.in_file();
}
