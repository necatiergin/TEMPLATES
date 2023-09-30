//source: https://ctrpeach.io/posts/cpp20-class-as-non-type-template-param/

#include <iostream>

struct NullOptT {} NullOpt;

/**
 * Literal class type.
 *
 * Represents an optionally provided `int`.
 */

struct OptionalInt {
    constexpr OptionalInt(NullOptT) {}
    constexpr OptionalInt(int value) : has_value(true), value(value) {}

    const bool has_value = false;
    const uint32_t value{};
};

/**
 * Prints whether or not a value was provided for "maybe" WITHOUT branching :)
 */
template<OptionalInt maybe>
void Print() {
    if constexpr (maybe.has_value) {
        std::cout << "Value is: " << maybe.value << std::endl;
    }
    else {
        std::cout << "No value." << std::endl;
    }
}

// Note: implicit conversions are at play!
int main()
{
    Print<123>();     // Prints "Value is: 123"
    Print<NullOpt>(); // Prints "No value."
}
