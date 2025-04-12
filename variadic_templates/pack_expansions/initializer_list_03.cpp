#include <initializer_list>
#include <iostream>

template<typename... Funcs>
void call_all(Funcs... funcs) 
{
    (void)std::initializer_list<int>{ (funcs(), 0)... };
    //(void)std::initializer_list{ (funcs(), 0)... };
}

void foo()
{
    std::cout << "foo()\n";
}

void bar()
{
    std::cout << "bar()\n";
}

void baz()
{
    std::cout << "bzr()\n";
}

int main()
{
    call_all(foo, bar, baz);
}
