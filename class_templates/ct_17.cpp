template <typename T>
class Nec {};

template <typename T>
class Erg {};

int main()
{
	Nec<Erg<int>> x; //error before C++ 11
}
