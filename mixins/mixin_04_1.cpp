#include <string>
#include <utility>
#include <iostream>

class Name
{
public:
    Name(std::string first_name, std::string last_name)
        : m_first_name(std::move(first_name))
        , m_last_name(std::move(last_name)) {}

    void print() const
    {
        std::cout << m_last_name << ", " << m_first_name << '\n';
    }

private:
    std::string m_first_name;
    std::string m_last_name;
};

template<typename Printable>
struct RepeatPrint : Printable
{
    explicit RepeatPrint(Printable const& printable) : Printable(printable) {}
    using Printable::Printable;
    void repeat(unsigned int n) const
    {
        while (n-- > 0)
        {
            this->print();
        }
    }
};

template<typename Printable>
RepeatPrint<Printable> repeatPrint(Printable const& printable)
{
    return RepeatPrint<Printable>(printable);
}


using RepeatPrintableName = RepeatPrint<Name>;

int main()
{
    RepeatPrintableName myname{ Name{"necati", "ergin" } };
    //RepeatPrintableName myname{"necati", "ergin"};
    //myname.repeat(10);

    repeatPrint(myname).repeat(5);
}
