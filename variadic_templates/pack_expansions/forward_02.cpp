#include <utility>

class Myclass {
public:
    Myclass();
    Myclass(int, double);
    Myclass(const char*);
};

template<typename... Args>
Myclass* make_myclass(Args&&... args) 
{
    return new Myclass(std::forward<Args>(args)...);
}
