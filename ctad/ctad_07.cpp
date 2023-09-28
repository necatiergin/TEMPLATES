#include <vector>
#include <list>
#include <set>

int main()
{
	using namespace std;

	vector vec{ 1, 2, 4, 7 };
	list ls{ 1.2, 2.3, 6.6, 1.9 };
	set s1{ 2, 4, 6, 8 };
	set s2{ {2, 4, 6, 8}, [](int a, int b) {return b < a; } };
}
