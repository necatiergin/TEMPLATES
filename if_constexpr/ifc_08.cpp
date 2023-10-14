template<int N>
constexpr int fibo()
{
    if constexpr (N >= 2)
        return fibo<N - 1>() + fibo<N - 2>();
    else
        return N;
}

int main()
{
    constexpr auto y = fibo<8>();
}
