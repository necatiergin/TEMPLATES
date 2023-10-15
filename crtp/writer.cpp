#include <iostream>
#include <stdexcept>

template <class Der>
class Writer
{
public:
    void write(const char* str) const
    {
        static_cast<const Der*>(this)->write_impl(str);
    }
};

class FileWriter : public Writer<FileWriter>
{
public:
    friend class Writer<FileWriter>;

    FileWriter(const char* pfilename) : m_file{ std::fopen(pfilename, "w") }
    {
        using namespace std::literals;
        if (!m_file)
            throw std::runtime_error{ "file: "s + pfilename + "cannot created" };
    }

    ~FileWriter() { fclose(m_file); }
private:
    void write_impl(const char* str) const
    {
        std::fprintf(m_file, "%s\n", str);
    }

private:
    FILE* m_file;
};


class ConsoleWriter : public Writer<ConsoleWriter>
{
public:
    friend class Writer<ConsoleWriter>;
private:
    void write_impl(const char* str) const
    {
        printf("%s\n", str);
    }
};


int main()
{
    ConsoleWriter cw;
    FileWriter fw{ "deneme.txt" };

    cw.write("necati ergin");
    fw.write("necati ergin");
}
