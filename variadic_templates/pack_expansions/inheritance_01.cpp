#include <iostream>

struct A { void fa() const { std::cout << "A::fa\n"; } };
struct B { void fb() const { std::cout << "B::fb\n"; } };
struct C { void fc() const { std::cout << "C::fc\n"; } };

template<typename... Bases>
struct Der : Bases... { };

int main() 
{
    Der<A, B, C> der;
    der.fa(); 
    der.fb(); 
    der.fc();
}
