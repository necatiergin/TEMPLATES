template <typename Der>
struct comparison {
	const Der& derived()const
	{
		return static_cast<const Der&>(*this);
	}

	friend bool operator>(const comparison<Der>& left, const comparison<Der>& right)
	{
		return right.derived() < left.derived();
	};

	friend bool operator>=(const comparison<Der>& left, const comparison<Der>& right)
	{
		return !(left.derived() < right.derived());
	}

	friend bool operator<=(const comparison<Der>& left, const comparison<Der>& right)
	{
		return !(right.derived() < left.derived());
	};

	friend bool operator==(const comparison<Der>& left, const comparison<Der>& right)
	{
		return !(left.derived() < right.derived()) && !(right.derived() < left.derived());
	}


	friend bool operator!=(const comparison<Der>& left, const comparison<Der>& right)
	{
		return !(left == right);
	}
};


class Nec : public comparison<Nec> {
public:
	Nec(int x) : x_{ x } {}
	bool operator<(const Nec& other)const
	{
		return x_ < other.x_;
	}
private:
	int x_;
};

#include <string>

class Person : public comparison<Person> {
public:
	Person(std::string name) : name_(std::move(name)) {}
	bool operator<(const Person& other)const
	{
		return name_ < other.name_;
	}
private:
	std::string name_;
};

#include <iostream>


int main()
{
	using namespace std;

	Nec x{ 132 }, y{ 43 };
	cout << boolalpha;

	cout << "x < y  : " << (x < y) << '\n';
	cout << "x <= y : " << (x <= y) << '\n';
	cout << "x > y  : " << (x > y) << '\n';
	cout << "x >= y : " << (x >= y) << '\n';
	cout << "x == y : " << (x == y) << '\n';
	cout << "x != y : " << (x != y) << '\n';

	Person p1{ "necati" };
	Person p2{ "necati" };

	cout << "p1 < p2  : " << (p1 < p2) << '\n';
	cout << "p1 <= p2 : " << (p1 <= p2) << '\n';
	cout << "p1 > p2  : " << (p1 > p2) << '\n';
	cout << "p1 >= p2 : " << (p1 >= p2) << '\n';
	cout << "p1 == p2 : " << (p1 == p2) << '\n';
	cout << "p1 != p2 : " << (p1 != p2) << '\n';
}
