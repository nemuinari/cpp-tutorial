#include <iostream>
#include <fstream>

void execute() {
    std::ofstream out("p8/example3.bin", std::ios::binary);

    if (!out) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    char value;
    for (int i = 0; i < 100; i++) {
        value = static_cast<char>(i + 1);
        out.write(&value, sizeof(char)); // Write values 1 to 100
    }
    out.close();

    std::ifstream in("p8/example3.bin", std::ios::binary);
    if (!in) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    const int targetSize = 100;
    char buffer[targetSize];

    in.read(buffer, targetSize); // Read 100 bytes

    std::streamsize bytesRead = in.gcount(); // Get the number of bytes actually read

    std::cout << "Read targetSize: " << targetSize << " bytes from file." << std::endl;
    std::cout << "Read bytesRead: " << bytesRead << " bytes from file." << std::endl;

    for (int i = 0; i < bytesRead; i++) {
        std::cout << "buffer[" << i << "] = " << static_cast<int>(buffer[i]) << std::endl;
    }
    in.close();
}
