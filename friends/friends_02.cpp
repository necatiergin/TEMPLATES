template <typename T>
class X;

template <typename T>
class A
{
    //friend class X<T>;    
    //friend class X<int>;  
private:
    void foo();
};



template <typename T>
class X {
public:
    void func()
    {
        A<double> ax;
        ax.foo();
    }
};


int main()
{
    X<double> a;

    a.func();
}
