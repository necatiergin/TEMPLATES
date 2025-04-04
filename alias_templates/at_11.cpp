#include <iostream>
#include <vector>
#include <memory>

template<typename T>
using UptrVec = std::vector<std::unique_ptr<T>>;

int main() 
{
    UptrVec<int> uvec;

    uvec.push_back(std::make_unique<int>(42));
    uvec.emplace_back(new int{35});

    std::cout << *uvec[0] << '\n';
    std::cout << *uvec[1] << '\n';
}
