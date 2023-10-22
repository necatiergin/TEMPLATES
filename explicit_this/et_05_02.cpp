struct postfix_incrementable {
    
    template <typename Self>
    auto operator++(this Self&& self, int)
    {
        auto tmp(self);
        ++self;
        return tmp;
    }
};

struct Nec : postfix_incrementable {
    // ...
    Nec& operator++();
};
