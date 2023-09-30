#include <iostream>
#include <cmath>

struct Vat {
    double val;

    constexpr Vat(double v) : val{ v } {}

    friend std::ostream& operator<< (std::ostream& oss, const Vat& vat)
    {
        return oss << vat.val;
    }
};

template<Vat vat>
int add_vat(int val)
{
    return static_cast<int>(std::round(val * (1 + vat.val)));
}

int main()
{
    constexpr Vat v{ 0.2 };
    std::cout << "vat: " << v<< '\n';

    std::cout << add_vat<v>(45) << '\n';
    std::cout << add_vat<v>(317) << '\n';
    std::cout << add_vat < Vat{ 0.08 } >(4512) << '\n';
}
