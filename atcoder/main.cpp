#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A.at(i) >> B.at(i);
    }

    // 1. 2次元配列の宣言（N x N を '-' で初期化）
    vector<vector<char>> results(N, vector<char>(N, '-'));

    // 2. 試合結果を書き込む
    for (int i = 0; i < M; i++)
    {
        // インデックスに合わせるため -1 する
        int winner = A.at(i) - 1;
        int loser = B.at(i) - 1;

        results.at(winner).at(loser) = 'o'; // 勝者に 'o'
        results.at(loser).at(winner) = 'x'; // 敗者に 'x'
    }

    // 3. 表の出力
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << results.at(i).at(j);
            if (j != N - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
// T - EX18
