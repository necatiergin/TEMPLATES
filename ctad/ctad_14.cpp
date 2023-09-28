#include <iostream>
#include <mutex>

std::mutex m;

int main()
{
	auto p = new std::pair{ 1, 5.6 };
	auto guard = std::lock_guard(m);
}
