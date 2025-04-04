// source : C++20 idioms for parameter packs
// David Mazières
// June, 2022

#include <iostream>
#include <string>

template<char ...Cs>
struct string_holder {
	static constexpr std::size_t len = sizeof...(Cs);
	static constexpr char value[] = { Cs..., '\0' };
	constexpr operator const char* () const { return value; }
	constexpr operator std::string() const { return { value, len }; }
};

template<size_t N, char...Cs>
consteval auto index_string()
{
	if constexpr (N < 10)
		return string_holder<N + '0', Cs...>{};
	else
		return index_string<N / 10, (N % 10) + '0', Cs...>();
}

constinit const char *pnumber = index_string<235478>();


int main()
{
	std::cout << pnumber;
}
