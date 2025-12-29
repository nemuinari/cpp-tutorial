#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> scores) {
    int total = 0;
    // for (size_t i = 0; i < scores.size(); i++)
    for (int i : scores) {
        total += i;
    }
    return total;
}

void output(int sum_a, int sum_b, int sum_c) {
    int total = sum_a * sum_b * sum_c;
    cout << total << endl;
    return;
}

vector<int> input(int N) {
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }
    return vec;
}

int main() {
    int N;
    cin >> N;

    vector<int> A = input(N);
    vector<int> B = input(N);
    vector<int> C = input(N);

    int sum_A = sum(A);
    int sum_B = sum(B);
    int sum_C = sum(C);

    output(sum_A, sum_B, sum_C);
    return 0;
}
// P - EX15
