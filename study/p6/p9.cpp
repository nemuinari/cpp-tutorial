#include <iostream>

// 算術演算子のオーバーロード
// フレンドな演算子オバーロード
class Integer
{
    int value;

public:
    explicit Integer(int value)
      : value(value) {}

    friend Integer operator+(const Integer& lhs, const Integer& rhs); // 加算演算子のオーバーロード
    friend Integer operator-(const Integer& lhs, const Integer& rhs); // 減算演算子のオーバーロード

    friend Integer operator+(int lhs, const Integer& rhs); // 加算演算子のオーバーロード
    friend Integer operator-(int lhs, const Integer& rhs); // 減算演算子のオーバーロード

    friend Integer operator+(const Integer& obj); // 単項プラス演算子のオーバーロード
    friend Integer operator-(const Integer& obj); // 単項マイナス演算子のオーバーロード

    void show() const;
};

Integer operator+(const Integer& lhs, const Integer& rhs)
{
    return Integer{lhs.value + rhs.value}; // 新しいIntegerオブジェクトを返す
}
Integer operator-(const Integer& lhs, const Integer& rhs)
{
    return Integer{lhs.value - rhs.value}; // 新しいIntegerオブジェクトを返す
}

Integer operator+(int lhs, const Integer& rhs)
{
    return Integer{lhs + rhs.value}; // 新しいIntegerオブジェクトを返す
}
Integer operator-(int lhs, const Integer& rhs)
{
    return Integer{lhs - rhs.value}; // 新しいIntegerオブジェクトを返す
}

Integer operator+(const Integer& obj)
{
    return Integer{+obj.value}; // 単項プラスの効果を適用
}
Integer operator-(const Integer& obj)
{
    return Integer{-obj.value}; // 単項マイナスの効果を適用
}

void Integer::show() const
{
    std::cout << "Integer Value: " << value << std::endl;
}

void practice()
{
    Integer x{10};
    Integer y{3};
    Integer z{7};

    auto v = x - -y + +z; // 単項演算子と二項演算子の組み合わせ
    v.show();             // 結果を表示
}
