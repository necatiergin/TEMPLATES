#include <iostream>

class Nec
{
public:
    constexpr static struct ctor_x_way{}x_way;
    constexpr static struct ctor_y_way{}y_way;

    explicit Nec(ctor_x_way);

    explicit Nec(ctor_y_way);
    //...
};

int main()
{
    Nec nx{ Nec::x_way};
    Nec ny{ Nec::y_way};    
}
