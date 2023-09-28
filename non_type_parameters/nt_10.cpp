template <int N, int& r>
void bar()
{
	//++N; // error
	++r; // OK
	//auto p1 = &N; // error
	auto p2 = &r; // OK
	//int& r1 = N; // error
	int& r2 = r; // OK
	//...
}

int g{};

int main()
{
	bar<2, g>();
}
