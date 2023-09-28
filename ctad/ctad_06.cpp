#include <vector>

std::vector v1{ 1, 2, 3 }; // vector<int>
std::vector v2{ v1, v1 }; // vector<vector<int>>
std::vector v3{ v1 }; // vector<int>
