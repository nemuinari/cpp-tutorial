#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    std::vector<int> vec = {A, B, C};
    std::sort(vec.begin(), vec.end());

    int result = vec.at(vec.size() - 1) - vec.at(0);
    std::cout << result << std::endl;

    return 0;
}
// O - EX14
