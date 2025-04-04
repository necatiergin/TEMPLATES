#include <iostream>
#include <string>

template <class Der>
struct MakeDouble
{
    Der get_double()const
    {
        auto& me = static_cast<const Der&>(*this);
        return me + me;
    }
};

template <class Der>
struct MakeTriple
{
    Der get_triple()const
    {
        auto& me = static_cast<const Der&>(*this);
        return me + me + me;
    }
};

template <typename T>
class Value : public MakeDouble <Value<T>>, public MakeTriple<Value<T>> {
public:
    Value(const T& val) : val_{ val } {}
    Value operator+(const Value& other)const
    {
        return val_ + other.val_;
    }

    void print()const
    {
        std::cout << val_ << '\n';
    }
public:
    T val_;
};

int main()
{
    Value<int> x{ 12 };

    auto y = x.get_double();
    auto z = x.get_triple();
    y.print();
    z.print();

    Value<std::string> s{ "necati" };

    auto a = s.get_double();
    auto b = s.get_triple();
    a.print();
    b.print();
}
