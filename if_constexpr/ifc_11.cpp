#include <string>
#include <iostream>

template <typename T>
std::string tostr(T t) 
{
    return std::to_string(t);
}

std::string tostr(const std::string& s) 
{
    return s;
}

std::string tostr(const char* cstr) 
{
    return cstr;
}

std::string tostr(bool b) 
{
    return b ? "true" : "false";
}

int main() 
{
    std::cout << tostr("necati") << '\n';
    std::cout << tostr(std::string{ "ergin" }) << '\n';
    std::cout << tostr(13) << '\n';
    std::cout << tostr(5.9) << '\n';
    std::cout << tostr(true) << '\n';
}
