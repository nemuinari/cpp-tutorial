#include <iostream>
#include <map>
#include <set>

int main() {
    std::set<int> mySet;
    mySet.insert(10);  // Insert element 10
    mySet.insert(20);  // Insert element 20
    mySet.insert(10);  // Insert element 10 again (duplicate)

    std::cout << "Set contains: ";
    for (const int& element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    std::map<std::string, int> myMap;
    myMap["apple"] = 1;   // Insert key-value pair ("apple", 1)
    myMap["banana"] = 2;  // Insert key-value pair ("banana", 2)
    myMap["orange"] = 1;  // Insert key-value pair ("orange", 1)
    myMap["apple"] = 3;   // Update value for key "apple" to 3

    std::cout << "Map contains:" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}
