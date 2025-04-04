#include <string>
#include <utility>

template<typename... Ptrs>
void delete_all(Ptrs*... ptrs) 
{
    (..., delete ptrs);
}


int main()
{
    auto p1{ new int(10) };
    auto p2{ new double(1.4) };
    auto p3{ new std::string("necati")};
    auto p4{ new std::pair{12, 5.6} };

    delete_all(p1, p2, p3, p4);
}
