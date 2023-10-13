#include <iostream>

template<typename First, typename ...Args>
void fold_print(First&& f, Args&&... args)
{
    std::cout << f;
    auto print_with_comma = [](const auto& v) {
        std::cout << ", " << v;
        };

    (..., print_with_comma(std::forward<Args>(args)));

    std::cout << '\n';
}

int main()
{
    fold_print("necati", 10, 20, 30, "ergin");
}
