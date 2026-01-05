#include <iostream>

// 基底クラスのアクセス制御
class Base
{
    void private_member()
    {
        std::cout << "Base::private_member called" << std::endl;
    }

public:
    void public_member()
    {
        std::cout << "Base::public_member called" << std::endl;
    }
};

class Derived : private Base
{
public:
    void member_test()
    {
        // private_member(); // エラー: privateメンバーにはアクセスできない
        std::cout << "Derived::member_test called" << std::endl;
        public_member(); // OK: publicメンバーにはアクセスできる
    }
};

void practice()
{
    Base base;
    Derived derived;

    // base.private_member(); // エラー: privateメンバーにはアクセスできない
    base.public_member(); // OK: publicメンバーにはアクセスできる

    // derived.private_member(); // エラー: privateメンバーにはアクセスできない
    // derived.public_member(); // エラー: private継承によりpublicメンバーにはアクセスできない
    derived.member_test(); // OK: Derivedのメンバー関数からアクセス可能
}
