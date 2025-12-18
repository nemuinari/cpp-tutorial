#include <bits/stdc++.h>
using namespace std;

int main() {
    std::string S;
    std::cin >> S;

    int total = 1;
    for (int i = 0; i < S.size(); i++) {
        char s = S[i];

        if (s == '+') {
            total++;
        } else if (s == '-') {
            total--;
        }
    }
    std::cout << total << std::endl;

    return 0;
}
// M EX12