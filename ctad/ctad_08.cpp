#include <optional>
#include <atomic>
#include <tuple>
#include <mutex>
#include <thread>
#include <complex>

using namespace std;

mutex mt;

int main()
{
	optional op{ 23 };
	atomic ato{ 56 };
	tuple tx{ 2, 5.6, "ali" };
	lock_guard guard{ mt };
	complex c{ 1.4, 7.87 };
}
