#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int I, r;
    int total = 0;

    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cin >> I >> r;
        total += (r - I) + 1;
    }
    std::cout << total << endl;

    return 0;
}

// L B-Theater
