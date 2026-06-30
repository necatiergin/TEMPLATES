#include <utility>

template<typename... Ts, typename... Us>
void func(Ts... t, Us... u)
{
    foo(std::pair<Ts, Us>{t, u}...);
    //pattern : pair<Ts, Us>{t,u}
    // expansion 
    // pair<T1, U1>{t1, u1},
    // pair<T2, U2>{t2, u2},
    // pair<T3, U3>{t3, u3}
}
