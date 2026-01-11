#include <iostream>
#include <fstream>
#include <string>

void execute() {
    std::ofstream out("./p8/hello_binary.bin", std::ios::binary);
    // Open file in binary mode

    const std::string data = "Hello, Binary World!";
    out.write(data.c_str(), data.size());
    // Write binary data to file

    out.close();

    std::ifstream in{"./p8/hello_binary.bin", std::ios::binary};
    // Open file in binary mode for reading

    std::string buffer(100, '\0');
    in.read(buffer.data(), buffer.size());
    // Read binary data from file

    std::cout << "buffer: " << buffer << std::endl;   // Output the read data
    std::cout << "in.eof: " << in.eof() << std::endl; // Check if end-of-file reached

    std::cout << "gcount: " << in.gcount() << std::endl; // Number of bytes read

    in.close();
}
