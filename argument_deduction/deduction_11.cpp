template<typename T>
void f(T, T);

void (*pf)(char, char) = &f;
