template <typename T>
class X;

template <typename T>
class A
{
    friend class X<T>;    
    
private:
    void foo() {}
};



template <typename T>
class X {
public:
    void func()
    {
        A<T> ax;
        A<int> y;
        ax.foo();
        y.foo(); //error
    }
};


int main()
{
    X<double> a;

    a.func();
}
