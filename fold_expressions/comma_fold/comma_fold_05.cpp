#include <iostream>

template<typename First, typename ...Args>
void FoldPrintComma(First&& f, Args&&... args)
{
    std::cout << f;
    auto withComma = [](const auto& v) {
        std::cout << ", " << v;
    };
    
    (..., withComma(std::forward<Args>(args)));

    std::cout << '\n';
}

int main() 
{
    FoldPrintComma("hello", 10, 20, 30); 

}
