// fold expressions
// binary left fold
// ellipsis paketin solunda binary lefy fold

#include <iostream>

template<typename... Ts>
int subtract(int num, Ts... args)
{
    return (num - ... - args); //Binary left fold
}

int main()
{
    int result = subtract(100, 50, 20, 7); //'result' is (((100 - 50) - 20) - 7) = 23

    std::cout << "result = " << result << "\n";
}
