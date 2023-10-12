// source : C++20 idioms for parameter packs (David Mazières)

#include <tuple>
#include <string>
#include <iostream>

template<typename ...L>
struct multilambda : L... {
	using L::operator()...;
	//constexpr multilambda(L...lambda) : L(std::move(lambda))... {}
};

int main()
{
	using namespace std::string_literals;

	std::tuple t(1, true, "hello"s, 3.0);

	constexpr multilambda action{
		[](int i) { std::cout << i << std::endl; },
		[](double d) { std::cout << d << std::endl; },
		[](bool b) { std::cout << (b ? "yes\n" : "no\n"); },
		[](std::string s) { std::cout << s.size() << " bytes\n"; },
	};

	apply([action](auto ...v) {
		(action(v), ...); // unary right fold
		}, t);
}
