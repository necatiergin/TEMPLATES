template <int N = 3 > 4 >   // syntax error
class Nec { /* ... */ };

template<int N = (3 > 4)> // valid
class Erg { /* ... */ };
