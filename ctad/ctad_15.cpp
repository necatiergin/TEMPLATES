#include <vector>

int main()
{
	using namespace std;
	//vector<pair> vec1{ {12, 5.6}, {23, 5.1}, {5, 1.1} }; //gecersiz
	vector<pair<int, double>> vec2{ {12, 5.6}, {23, 5.1}, {5, 1.1} }; 
	vector vec3{ pair<int, double>{12, 5.6}, pair<int, double>{23, 5.1}, pair<int, double>{5, 1.1} };
}
