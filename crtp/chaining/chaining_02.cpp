#include <ostream>

class Printer
{
public:
    Printer(std::ostream& pstream) : m_stream(pstream) {}

    template <typename T>
    Printer& print(const T& t)
    {
        m_stream << t << ' ';
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


class ConsolePrinter : public Printer
{
public:
    ConsolePrinter() : Printer(std::cout) {}

    ConsolePrinter& set_color(int color)
    {
        std::cout << "console color set\n";
        return *this;
    }
};

int main()
{
    ConsolePrinter().print("Necati ").set_color(12).print_line("Ergin"); // invalid
}
