#include <string>
#include <iostream>

template<typename Printable>
struct RepeatPrint
{
    void repeat(unsigned int n) const
    {
        while (n-- > 0)
        {
            static_cast<Printable const&>(*this).print();
        }
    }
};

class Name : public RepeatPrint<Name>
{
public:
    Name(std::string first_name, std::string last_name)
        : m_first_name(std::move(first_name))
        , m_last_name(std::move(last_name)) {}

    void print() const
    {
        std::cout << m_first_name << ", " << m_last_name << '\n';
    }

private:
    std::string m_first_name;
    std::string m_last_name;
};

int main()
{
    Name nec("Necati", "Ergin");
    nec.repeat(10);
}
