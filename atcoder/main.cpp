#include <bits/stdc++.h>
using namespace std;

int main() {
    std::string N;
    std::cin >> N;

    int num = std::stoi(N);
    int total = 0;

    for (int i = 0; i < N.size(); i++) {
        total += N[i] - '0';
    }

    if (num % total == 0) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}

// L B-Harshad Number
