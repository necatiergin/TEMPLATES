#include <iostream>

template<typename... Types>
struct Printer;

template<typename First, typename... Rest>
struct Printer<First, Rest...> {
    static void print() 
    {
        std::cout << typeid(First).name() << "\n";
        Printer<Rest...>::print();
    }
};

template<>
struct Printer<> {
    static void print() 
    {
       // std::cout << "no more\n";
    }
};

int main() 
{
    Printer<int, double, char, std::string>::print();
}
