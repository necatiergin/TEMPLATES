class Nec
{
public:
    struct ctor_x_way{};
    struct ctor_y_way{};

    explicit Nec(ctor_x_way);
    explicit Nec(ctor_y_way);
    //...
};

int main()
{
    //Nec nx(Nec::ctor_x_way());  most vexing parse
    Nec nx{ Nec::ctor_x_way{} };
    Nec ny{ Nec::ctor_y_way{} };
}
