#include <iostream>
#include <array>

template<typename... Ptrs>
auto make_ptr_array(Ptrs*... ptrs) 
{
    return std::array { static_cast<void*>(ptrs)... };
}

int main()
{
    int x{};
    double d{};
    auto ar = make_ptr_array(&x, &d, &std::cout);

    for (auto p : ar)
        std::cout << p << '\n';
}
