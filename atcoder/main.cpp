#include <bits/stdc++.h>
using namespace std;

int main() {
    std::string A, B;

    std::cin >> A; 
    std::cin >> B; 

    if (A.size() > B.size()) {
        std::cout << A << std::endl; 
    } else if (A.size() < B.size()) {
        std::cout << B << std::endl;
    }

    return 0;
}
// M - A - 高橋くんの研修 
