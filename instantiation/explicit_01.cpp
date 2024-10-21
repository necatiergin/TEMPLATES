//explicit intantiation

template<typename T>
void foo(T)
{
    //...
}

template void foo<int>(int);
template void foo<>(float);
template void foo(long);
template void foo(char);
