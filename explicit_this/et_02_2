#include <optional>


template <typename T>
class Optional {
public:
    bool has_value()const;

    // version of value for non-const lvalues
    template <class Self>
    constexpr auto&& value(this Self&& self) {
        if (self.has_value()) {
            return std::forward<Self>(self).m_value;
        }
        throw std::bad_optional_access();
    }
    // ...
};
