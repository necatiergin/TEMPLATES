#include <ostream>

class Printer
{
public:
    Printer(std::ostream& pstream) : m_stream(pstream) {}

    template <typename T>
    Printer& print(const T& t)
    {
        m_stream << t;
        return *this;
    }

    template <typename T>
    Printer& print_line(const T& t)
    {
        m_stream << t << '\n';
        return *this;
    }
private:
    std::ostream& m_stream;
};


#include <iostream>

int main()
{
    Printer(std::cout).print("necati ").print_line("ergin");
}
