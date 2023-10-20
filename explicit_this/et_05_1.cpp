template <typename Der>
struct postfix_incrementable {
    Der operator++(int) 
    {
        auto& self = static_cast<Der&>(*this);

        Der tmp(self);
        ++self;
        return tmp;
    }
};

struct Nec : postfix_incrementable<Nec> {
    // ...
    Nec& operator++();
};
