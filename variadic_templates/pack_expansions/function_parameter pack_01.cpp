#include <iostream>

template<typename... Types, int... N>
void func(Types(&...args)[N])
{
    //MSVS
    std::cout << __FUNCSIG__ << '\n';
}

int main()
{
    int a[2]{};
    int b[3]{};
    int c[5]{};
    double d[7]{};

    func(a, b, c, d);
}
