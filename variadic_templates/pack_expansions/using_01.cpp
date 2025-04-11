#include <iostream>

struct A {
    void foo(int) const { std::cout << "A::foo(int)\n"; }
};

struct B {
    void foo(double) const { std::cout << "B::foo(double)\n"; }
};


struct C {
    void foo(float) const { std::cout << "C::foo(float)\n"; }
};

template<typename... Bases>
struct Der : Bases... {
    using Bases::foo...; 
};

int main() 
{
    Der<A, B, C> der;

    der.foo(42);     // A::foo(int)
    der.foo(4.2);   // B::foo(double)
    der.foo(4.2F);   // C::foo(float)
}
