#include <algorithm>
#include <iostream>

template<int N>
struct StrLiteral {
    constexpr StrLiteral(const char (&str)[N]) 
    {
        std::copy(str, str + N, s);
    }
    char s[N];
};

template<StrLiteral str>
struct Nec{
    Nec()
    {
        std::cout << str.s << '\n';
    }
};

template<StrLiteral str>
void foo() 
{
    std::cout << str.s << '\n';
}

int main() 
{
    Nec<"necati ergin"> nx;
    foo<"string literal">();
}
