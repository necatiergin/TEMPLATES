#include <iostream>

template<typename T>
void func(T&& val) 
{
    std::cout << "Universal reference overlad\n";
}

template<typename T>
void func(T* ptr) 
{
    std::cout << "Pointer overload\n";
}

int main() 
{
    int x = 10;
    int* p = &x;

    func(p);  // ???
}
