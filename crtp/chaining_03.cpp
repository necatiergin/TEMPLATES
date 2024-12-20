#include <ostream>

template <typename ConcretePrinter>
class Printer
{
public:
    Printer(std::ostream& pstream) : m_stream(pstream) {}

    template <typename T>
    ConcretePrinter& print(const T& t)
    {
        m_stream << t;
        return static_cast<ConcretePrinter&>(*this);
    }

    template <typename T>
    ConcretePrinter& print_line(const T &t)
    {
        m_stream << t << '\n';
        return static_cast<ConcretePrinter&>(*this);
    }
private:
    std::ostream& m_stream;
};

#include <iostream>

class ConsolePrinter : public Printer<ConsolePrinter>
{
public:
    ConsolePrinter() : Printer(std::cout) {}

    ConsolePrinter& set_color(int c)
    {
        return *this;
    }
};

int main()
{
    ConsolePrinter().print("Necati").set_color(15).print_line("Ergin");
}
