template <class T>
void tfunc(T);

template <typename T>
class A
{
    friend void tfunc<T>(T);
    void foo();
};

template <typename T>
void tfunc(T)
{
    A<T> x;
    x.foo();
}


int main()
{
    tfunc(10);
    tfunc(2.4);
}
