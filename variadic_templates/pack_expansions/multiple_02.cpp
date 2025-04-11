#include <utility>

template <typename ...Args>
void bar(Args&&... args);

template<typename... Args>
void foo(Args&&... args) 
{
    bar(std::forward<Args>(args)...);
}
