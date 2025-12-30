#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> data(5);
    for (int i = 0; i < 5; ++i) {
        cin >> data.at(i);
    }

    for (size_t i = 1; i < data.size(); i++) {
        if (data.at(i - 1) == data.at(i)) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
// Q - EX16
