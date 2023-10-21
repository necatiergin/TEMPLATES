#include <cstddef>

template <typename = decltype([]{})>
class Counter {
public:
	Counter()
	{
		++ms_count_created;
		++ms_count_alive;
	}

	Counter(const Counter&)
	{
		++ms_count_created;
		++ms_count_alive;
	}

	~Counter()
	{
		--ms_count_alive;
	}

	static std::size_t how_many_created() { return ms_count_created; }
	static std::size_t how_many_alive() { return ms_count_alive; }
private:
	inline static std::size_t ms_count_created{};
	inline static std::size_t ms_count_alive{};
};



class Nec : public Counter<> {
public:
};

class Erg : public Counter<> {
public:
};

#include <iostream>

int main()
{
	Nec n1, n2, n3;
	{
		Nec n1, n2, n3;
	}
	std::cout << Nec::how_many_alive() << '\n';
	std::cout << Nec::how_many_created() << '\n';

	Erg e1, e2;
	{
		Erg e1, e2, e3, e4;
	}
	std::cout << Erg::how_many_alive() << '\n';
	std::cout << Erg::how_many_created() << '\n';
}
