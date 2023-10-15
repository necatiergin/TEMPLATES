#include <cstddef>

template <typename T>
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



class Neco : Counter<Neco> {
public:
	using Counter<Neco>::how_many_alive;
	using Counter<Neco>::how_many_created;
};

#include <iostream>

int main()
{
	Neco n1, n2, n3;
	{
		Neco n1, n2, n3;
	}
	std::cout << Neco::how_many_alive() << '\n';
	std::cout << Neco::how_many_created() << '\n';
}
