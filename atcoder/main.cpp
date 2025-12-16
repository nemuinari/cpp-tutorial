#include <bits/stdc++.h>
using namespace std;

/*
問題文
square1001 は、電光掲示板に整数
1 が表示されているのを見ました。
彼は、電光掲示板に対して、以下の操作 A, 操作 B をすることができます。

操作 A： 電光掲示板に表示する整数を「今の電光掲示板の整数を
2 倍にしたもの」に変える。
操作 B： 電光掲示板に表示する整数を「今の電光掲示板の整数に
K を足したもの」に変える。
square1001 は、操作 A, 操作 B 合計で
N 回 行わなければなりません。 そのとき、
N
回の操作後の、電光掲示板に書かれている整数として考えられる最小の値を求めなさい。
*/

int main() {
    int N, K;
    std::cin >> N;
    std::cin >> K;  // 1 <= N, K <= 10

    // dp[i] = i回の操作後の最小値
    vector<int> dp(N + 1);
    dp[0] = 1;

    for (int i = 1; i <= N; ++i) {
        // 操作A（×2）を行う場合と操作B（+K）を行う場合の最小値
        dp[i] = min(dp[i - 1] * 2, dp[i - 1] + K);
    }

    std::cout << dp[N] << std::endl;
    return 0;
}

// B - Addition and Multiplication