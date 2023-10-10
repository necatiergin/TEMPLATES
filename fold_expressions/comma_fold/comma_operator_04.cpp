#include<array>
#include<vector>
#include<iostream>
#include<type_traits>

template<class T>
concept hasIterator = requires (T a)
{
    a.begin();
    a.end();
};

template<typename T>
void impl(const T& x) 
{
    if constexpr (hasIterator<T>) {
        std::cout << "[";
        for (auto& elem : x)
            std::cout << elem << ' ';
        std::cout << "]";
    }
    else if constexpr (std::is_pointer_v<T>)
        std::cout << *x;
    else
        std::cout << x;

    std::cout << ' ';
}

void print(const auto&... args) 
{
    ((impl(args)), ...);
}

int main() 
{
    std::array ar{9, 8, 7};
    std::vector dvec{ 1.5, 2.0, 2.5, 3.0};
    int* pi{ new int{ 13 } };
    print(345, 4.5, ar, dvec, pi);
}
