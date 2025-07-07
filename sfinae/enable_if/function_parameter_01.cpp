#include <type_traits>
#include <iostream>

template<typename T>
//void func(T value, typename std::enable_if<std::is_floating_point<T>::value>::type* = 0) 
void func(T value, typename std::enable_if<std::is_floating_point_v<T>>::type* = 0) 
{
    std::cout << "Floating point type: " << value << "\n";
}


int main()
{
    func(3.4);
    // func(3); // error
}
