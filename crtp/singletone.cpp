//CRTP base singleton class
#include <memory>
#include <mutex>


template<typename TDerived>
class Singleton
{
    static std::unique_ptr<TDerived> m_instance;
    static std::once_flag            m_once;
protected:
    Singleton() {}
public:

    ~Singleton() { }
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    static TDerived& GetInstance()
    {
        std::call_once
        (
            Singleton::m_once,
            []() { Singleton::m_instance.reset(new TDerived()); }
        );
        return *m_instance;
    }
};

template<typename TDerived>
std::unique_ptr<TDerived>  Singleton<TDerived>::m_instance;

template<typename TDerived>
std::once_flag   Singleton<TDerived>::m_once;


#include <iostream>

class Myclass : public Singleton<Myclass>
{
public:
    Myclass() {
        std::cout << "Myclass ctor\n";
    }

    ~Myclass() {
        std::cout << "Myclass destructor\n";
    }

    void foo()
    {
        std::cout << "Myclass::foo()\n";
    }
};

int main()
{
    Myclass::GetInstance().foo();
}
