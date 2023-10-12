// https://en.cppreference.com/w/cpp/language/parameter_pack

template<class... Us>
void f(Us... pargs) {}

template<class... Ts>
void g(Ts... args)
{
    f(&args...); // “&args...” is a pack expansion
    // “&args” is its pattern
}

int main()
{
    g(1, 0.2, "a"); // Ts... args expand to int E1, double E2, const char* E3
    // &args... expands to &E1, &E2, &E3
    // Us... pargs expand to int* E1, double* E2, const char** E3
}
