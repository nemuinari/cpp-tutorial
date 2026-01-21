#include <iostream>

// cast operators
// down casting with static_cast
class Base {
public:
    virtual ~Base() {}

    const char* get_class_name() const {
        return "Base";
    }
};

class Derived : public Base {
public:
    const char* get_class_name() const {
        return "Derived";
    }
};

class MoreDerived : public Derived {
public:
    const char* get_class_name() const {
        return "MoreDerived";
    }
};

int main() {
    Derived d;
    Base* bp = &d;

    std::cout << "Class name via method: " << bp->get_class_name() << std::endl;  // Base

    Derived* dp = static_cast<Derived*>(bp);
    if (dp) {
        std::cout << "Static cast successful: " << dp->get_class_name() << std::endl;
    } else {
        std::cout << "Static cast failed" << std::endl;
    }

    MoreDerived* mdp = dynamic_cast<MoreDerived*>(bp);
    if (mdp) {
        std::cout << "Dynamic cast successful: " << mdp->get_class_name() << std::endl;
    } else {
        std::cout << "Dynamic cast failed" << std::endl;
    }

    return 0;
}
