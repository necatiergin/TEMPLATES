// from cppreference.com

#include <cstdio>
 
#ifndef __cpp_explicit_this_parameter // Traditional syntax
 
template <class Derived>
struct Base
{
    void name() { static_cast<Derived*>(this)->impl(); }
protected:
    Base() = default; // prohibits the creation of Base objects, which is UB
};
struct D1 : public Base<D1> { void impl() { std::puts("D1::impl()"); } };
struct D2 : public Base<D2> { void impl() { std::puts("D2::impl()"); } };
 
#else // C++23 deducing-this syntax
 
struct Base { void name(this auto&& self) { self.impl(); } };
struct D1 : public Base { void impl() { std::puts("D1::impl()"); } };
struct D2 : public Base { void impl() { std::puts("D2::impl()"); } };
 
#endif
 
int main()
{
    D1 d1; d1.name();
    D2 d2; d2.name();
}
