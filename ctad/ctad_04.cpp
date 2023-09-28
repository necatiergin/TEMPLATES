#include <list>
#include <string>
#include <vector>
#include <iostream>

int main()
{
	using namespace std;

	list<pair<string, double>> mylist{
		{"necati", 4.25},
		{"saadet", 6.92},
		{"umut", 4.90},
		{"selim", 2.6},
	};

	vector vec(mylist.rbegin(), mylist.rend()); //not braces here

	for (const auto& [name, wage] : vec) {
		cout << name << " " << wage << '\n';
	}
}
