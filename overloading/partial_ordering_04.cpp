template<typename T>
void t(T*, T const* = nullptr, ...);

template<typename T>
void t(T const*, T*, T* = nullptr);


void example(int* p)
{
    t(p, p);
}
