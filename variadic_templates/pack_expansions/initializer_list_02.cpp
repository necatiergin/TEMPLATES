#include <vector>
#include <iostream>

template<typename... Args>
auto make_vector(const Args&... args) 
{
    return std::vector{ args... };  
}

int main()
{
    auto vec = make_vector(1, 3, 5, 7);

    for (auto i : vec)
        std::cout << i << ' ';
}
