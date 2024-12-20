#include <iostream>

template <class Derived>
struct Base
{
    void interface()
    {
        // burada kod olabilir
        static_cast<Derived*>(this)->implementation();
        // burada kod olabilir
    }

    static void static_interface()
    {
        // burada kod olabilir
        Derived::static_implementation();
        // burada kod olabilir
    }

    void implementation()
    {
        std::cout << "Base implementation\n";
    }

    static void static_implementation()
    {
        std::cout << "Base static_implementation\n";
    }
};

struct ADer : Base<ADer>
{
    /*void implementation()
    {
        std::cout << "ADer implementation\n";
    }*/

    /*static void static_implementation()
    {
        std::cout << "ADer static_implementation\n";
    }*/
};

int main()
{
    ADer a;

    a.interface();
    ADer::static_interface();
}
